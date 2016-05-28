# -*- coding: utf-8 -*-
import numpy as np

# szkic:	<X>	-> (*W1) ->	<Hin -> (sigmoid) -> Hout>	-> (*W2) ->	<Yin -> (sigmoid) -> Yout>
#		wejscie		wagi 1			warstwa ukryta				wagi 2				wyjscie

class NeuralNetwork(object):
	def __init__(self, inputs=2, hidden=3, outputs=1):
		self.inputLayerSize = inputs
		self.hiddenLayerSize = hidden
		self.outputLayerSize = outputs

		self.W1 = np.random.randn(self.inputLayerSize, self.hiddenLayerSize)
		self.W2 = np.random.randn(self.hiddenLayerSize, self.outputLayerSize)

	def push(self, X):
		self.Hin = np.dot(X, self.W1)
		self.Hout = self.sigmoid(self.Hin)
		self.Yin = np.dot(self.Hout, self.W2)
		self.Yout = self.sigmoid(self.Yin)

	def sigmoid(self, Z):
		return 1 / (1 + np.exp(-Z))

	def dSigmoid(self, Z):	# pochodna
		return np.exp(-Z) / ((1 + np.exp(-Z))**2)

	def costFunction(self, X, Y):
		self.push(X)
		C = 0.5*sum((Y - self.Yout)**2)
		return C

	def dCostFunction(self, X, Y):
		self.push(X)
		# pochodna wzgledem W2
		delta2 = np.multiply(-(Y - self.Yout), (self.dSigmoid(self.Yin)))
		dCdW2 = np.dot(self.Hout.T, delta2)
		# pochodna wzgledem W1
		delta1 = np.dot(delta2, self.W2.T) * self.dSigmoid(self.Hin)
		dCdW1 = np.dot(X.T, delta1)
		return dCdW1, dCdW2

	# Funkcje pomocnicze:
	def getWeightsVector(self):
		weights = np.concatenate((self.W1.ravel(), self.W2.ravel()))
		return weights

	def setWeightsFromVector(self, weights):
		W1_start = 0
		W1_end = self.hiddenLayerSize * self.inputLayerSize
		self.W1 = np.reshape(weights[W1_start:W1_end], (self.inputLayerSize , self.hiddenLayerSize))
		W2_end = W1_end + self.hiddenLayerSize*self.outputLayerSize
		self.W2 = np.reshape(weights[W1_end:W2_end], (self.hiddenLayerSize, self.outputLayerSize))

	def getGradientsVector(self, X, Y):
		dCdW1, dCdW2 = self.dCostFunction(X, Y)
		return np.concatenate((dCdW1.ravel(), dCdW2.ravel()))

	def getNumericalGradientsVector(self, X, Y):
		orgWeights = self.getWeightsVector()
		numGrad = np.zeros(orgWeights.shape)
		perturbations = np.zeros(orgWeights.shape)
		eps = 0.0001
		for i in range(len(orgWeights)):
			perturbations[i] = eps
			self.setWeightsFromVector(orgWeights + perturbations)
			loss2 = self.costFunction(X, Y)
			self.setWeightsFromVector(orgWeights - perturbations)
			loss1 = self.costFunction(X, Y)
			# pochodna z definicji
			numGrad[i] = (loss2 - loss1) / (2*eps)
			perturbations[i] = 0
		self.setWeightsFromVector(orgWeights)
		return numGrad

	def testGradientsComputation(self, X, Y):
		numGrad = self.getNumericalGradientsVector(X, Y)
		grad = self.getGradientsVector(X, Y)
		difference = np.linalg.norm(grad - numGrad) / np.linalg.norm(grad + numGrad)
		if difference > 1e-9:
			print "Possibly significant gradients difference!"
		return difference



if __name__ == "__main__":
	def decreaseCost(nn,X,Y, dW):
		dCdW1, dCdW2 = nn.dCostFunction(X, Y)
		nn.W1 -= dW * dCdW1
		nn.W2 -= dW * dCdW2
		return nn.costFunction(X, Y)
	nn = NeuralNetwork()
	X = np.array([[10,5], [4,4], [1,6]], dtype=float)
	Y = np.array([[91], [54], [7]], dtype=float)
	X /= 10	# znormalizowane
	Y /= 100 # znormalizowane
	print("Input:")
	print X
	print("Desired output:")
	print Y
	print("Output:")
	nn.push(X)
	print("Gradient computation test:")
	print nn.testGradientsComputation(X, Y)
	print nn.Yout
	print("Cost:")
	print nn.costFunction(X,Y)
	for i in range(99999):
		decreaseCost(nn, X, Y, 0.01)
	print("After decreasing cost 100000 times:")
	print("Cost:")
	print decreaseCost(nn, X, Y, 0.01)
	print("Output:")
	print nn.Yout
	print("Gradient computation test:")
	print nn.testGradientsComputation(X, Y)

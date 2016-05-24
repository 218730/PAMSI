# -*- coding: utf-8 -*-
import numpy as np

# szkic:	<X>    -> (*W1) ->    <Hin -> (sigmoid) -> Hout>    -> (*W2) ->    <Yin -> (sigmoid) -> Yout>
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

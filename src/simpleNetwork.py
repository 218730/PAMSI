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
	nn = NeuralNetwork()
	randInt = lambda: int(np.random.rand() * 10)
	X = np.array([[10,5], [4,4], [3,6]], dtype=float)
	#X = np.array([[randInt(),randInt()], [randInt(),randInt()], [randInt(),randInt()]], dtype=float)
	print("Input:")
	print X
	print("Output")
	print nn.push(X)
	

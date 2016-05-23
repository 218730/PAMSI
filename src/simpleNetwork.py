# -*- coding: utf-8 -*-
import numpy as np

# szkic:	<X>    -> (*W1) ->    <Hin -> (sigmoid) -> Hout>    -> (*W2) ->    <Yin -> (sigmoid) -> Yout>
#		wejscie		wagi 1			warstwa ukryta				wagi 2				wyjscie

class NeuralNetwork(object):
	def __init__(self):
		self.inputLayerSize = 2
		self.hiddenLayerSize = 3
		self.outputLayerSize = 1

		self.W1 = np.random.randn(self.inputLayerSize, self.hiddenLayerSize)
		self.W2 = np.random.randn(self.hiddenLayerSize, self.outputLayerSize)

	def push(self, X):
		self.Hin = np.dot(X, self.W1)
		self.Hout = self.sigmoid(self.Hin)
		self.Yin = np.dot(self.Hout, self.W2)
		Yout = self.sigmoid(self.Yin)
		return Yout

	def sigmoid(self, Z):
		return 1 / (1 + np.exp(-Z))


if __name__ == "__main__":
	nn = NeuralNetwork()
	randInt = lambda: int(np.random.rand() * 10)
	X = np.array([[10,5], [4,4], [3,6]], dtype=float)
	#X = np.array([[randInt(),randInt()], [randInt(),randInt()], [randInt(),randInt()]], dtype=float)
	print("Input:")
	print X
	print("Output")
	print nn.push(X)

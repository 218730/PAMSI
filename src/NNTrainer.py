# -*- coding: utf-8 -*-
import simpleNetwork
from scipy import optimize

class NNTrainer(object):
	def __init__(self, NN):
		self.NN = NN

	def train(self, X, Y):
		self.X = X
		self.Y = Y
		self.CostsHistory = []
		# optymalizacja
		orgWeights = self.NN.getWeightsVector()
		optimOptions = {'maxiter': 200, 'disp': True}
		optimResults = optimize.minimize(fun=self.costFunctionWrapper, x0=orgWeights, jac=True, \
			method='BFGS', args=(X, Y), options=optimOptions, callback=self.callbackFunction)
		# powinno wypisac komunikat bledu w razie niepowodzenia
		if not optimResults.success:
			print optimResults.message
		self.NN.setWeightsFromVector(optimResults.x)
		self.optimResults = optimResults


	# do przekazywania funkcji optymalizacyjnej argumentow we wlasciwej formie
	def costFunctionWrapper(self, weights, X, Y):
		self.NN.setWeightsFromVector(weights)
		cost = self.NN.costFunction(X, Y)
		grad = self.NN.getGradientsVector(X, Y)
		return cost, grad

	# do zapisywania historii zmian kosztów
	def callbackFunction(self, weights):
		self.NN.setWeightsFromVector(weights)
		self.CostsHistory.append(self.NN.costFunction(self.X, self.Y))


from matplotlib import pyplot as plt
def main():
	nn = simpleNetwork.NeuralNetwork()
	trainer = NNTrainer(nn)

	X = []
	Y = []
	for i in range(10):
		rand = lambda: simpleNetwork.np.random.rand()
		X.append([rand(), rand()])
		Y.append([rand()])
	X = simpleNetwork.np.array(X)
	Y = simpleNetwork.np.array(Y)

	trainer.train(X, Y)
	plt.plot(trainer.CostsHistory)
	plt.show()

if __name__ == '__main__':
	main()

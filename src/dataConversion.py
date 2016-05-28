# -*- coding: utf-8 -*-
from PIL import Image, ImageOps
from sys import argv # dostęp do argumentów wywołania programu (argv to lista)
import os
from fnmatch import fnmatch

class Converter(object):
	def __init__(self, inputDirs, outputDirs, newSize):
		self.inputDirs = inputDirs
		self.outputDirs = outputDirs
		self.newSize = newSize

	def convertImage(self, inputPath, outputPath):
		r = inputPath
		path = outputPath

		for root, dirs, files in os.walk(r):
			for f in files:
				if f.endswith('.gif'):
					if not os.path.exists(path): #Tworzony jest folder wyjsciowy
						os.makedirs(path)

					newroot = root.split(r)[1] #Te dwie linijki moga powodowac problemy, dlatego wazne jest, by obrazy do konwersji znajdowaly sie w podfolderach
					newroot = newroot.split('/')[1] #Podfolder

					f2 = f.split('.')[0]

					orgImg = Image.open(root + "/" + f)
					orgImg = orgImg.convert('L')
					orgSize = orgImg.size
					# niech beda tylko kwadratowe obrazy
					assert orgSize[0] == orgSize[1]
					assert self.newSize[0] == self.newSize[1]
					borderSize = int((self.newSize[0] - orgSize[0]) / 2)
					# dodanie bialej ramki
					newImg = ImageOps.expand(orgImg, borderSize, 0)
					# zapisanie wersji bez inwersji
					newImg.save(path + newroot + f2 + ".pgm")
					# dodanie wersji z inwersja
					newImg = ImageOps.invert(newImg)
					newImg.save(path + newroot + "n" + f2 + ".pgm")


if __name__ == '__main__':
	argv.append("Something")
	if argv[2] != "Something":

		conv = Converter(argv[1], argv[2], (28, 28))
		print "Trwa konwertowanie i kopiowanie plikow z %s do %s" % (argv[1], argv[2])
		conv.convertImage(argv[1], argv[2])
	else:
		print "Potrzebne sa dwa argumenty!!"

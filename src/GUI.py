# -*- coding: utf-8 -*-
import pygame
from PIL import Image, ImageFilter

BLACK = (0, 0, 0)
GREY = (180, 180, 180)
WHITE = (255, 255, 255)

WINDOW_SIZE = (600, 400)
PAINT_SIZE = (WINDOW_SIZE[0]/2, WINDOW_SIZE[0]/2)
RAW_IMAGE_SIZE = (WINDOW_SIZE[0]-PAINT_SIZE[0], PAINT_SIZE[1])
RESULT_SIZE = (WINDOW_SIZE[0], WINDOW_SIZE[1]-PAINT_SIZE[1])

OUTPUT_IMAGE_SIZE = (28, 28)

class GUI(object):
	def __init__(self):
		"Inicjalizuje GUI, tworzy obszar okna i dzieli go na podobszary."
		pygame.init()
		self.screen = pygame.display.set_mode(WINDOW_SIZE)
		self.paintScreen = self.screen.subsurface( pygame.Rect((0,0), PAINT_SIZE) )
		self.rawImageScreen = self.screen.subsurface( pygame.Rect((PAINT_SIZE[1], 0), RAW_IMAGE_SIZE) )
		self.resultScreen = self.screen.subsurface( pygame.Rect((0, PAINT_SIZE[0]), RESULT_SIZE) )

		self.screen.fill(WHITE)
		self.resultScreen.fill(GREY)
		pygame.display.flip()
		self.running = False
		self.clock = pygame.time.Clock()
		self.size = WINDOW_SIZE
		self.fps = 0

		self.lineWidth = 20
		self.font = pygame.font.SysFont("monospaced", 30)
		self.originalImageFile = "obrazy/znak.bmp"
		self.processedImageFile = "obrazy/znak.pgm"

	def mainLoop(self, fps=0):
		self.running = True
		self.fps = fps
		while self.running:
			pygame.display.set_caption("FPS: %i" % self.clock.get_fps())
			self.handleEvents()
			self.update()
			self.draw()
			pygame.display.flip()
			self.clock.tick(self.fps)

	def mouseUp(self, button, pos):
		if button == 3 and self.isInPaintScreen(pos):
			print("Czyszczenie ekranu.")
			self.paintScreen.fill(WHITE)
		elif button == 1:
			self.paintCircle(pos)
			self.processImage()

	def mouseDown(self, button, pos):
		if button == 1:
			self.paintCircle(pos)

	def mouseMotion(self, buttons, pos, rel):
		if buttons[0] == 1:
			self.paintLine(pos, rel)

	def keyDown(self, key):
		pass

	def keyUp(self, key):
		pass

	def update(self):
		pass

	def draw(self):
		self.drawBorders()

	def paintLine(self, end, (dx, dy)):
		"Rysuje linię na wskazanym przemieszczeniu poprzez narysowanie koła w każdym punkcie ścieżki (prostej)."
		distance = max(abs(dx), abs(dy))
		for i in range(distance):
			x = int(end[0] - float(i)*dx/distance)
			y = int(end[1] - float(i)*dy/distance)
			pygame.draw.circle(self.paintScreen, BLACK, (x, y), self.lineWidth/2)

	def drawBorders(self):
		"Rysuje linię oddzielającą ekrany."
		pygame.draw.line(self.screen, GREY, (PAINT_SIZE[0], 0), (PAINT_SIZE[0], PAINT_SIZE[1]), 1)

	def paintCircle(self, pos):
		"Tworzy pojedyncze koło służące do rysowania na ekranie."
		pygame.draw.circle(self.paintScreen, BLACK, pos, self.lineWidth/2)

	def isInPaintScreen(self, pos, error=(0, 0)):
		"Sprawdza, czy pozycja znajduje się w obszarze rysowania (w granicach błędu)."
		x, y = pos
		dx, dy = error
		if x - dx < PAINT_SIZE[0] and y - dy < PAINT_SIZE[1]:
			return True
		else:
			return False

	def processImage(self):
		"Pobiera narysowany obraz, zapisuje, skaluje, i wyświetla go, <<ocenia literę i wyświetla wynik>>."
		self.saveImage()
		self.showRawImage()
		# Siec neuronowa - ocena
		self.writeResult()

	def saveImage(self):
		"Zapis i odpowiednia obróbka obrazu."
		pygame.image.save(self.paintScreen, self.originalImageFile)
		img = Image.open(self.originalImageFile)
		img = img.filter(ImageFilter.BLUR)	# bez tego obraz bedzie tylko dwukolorowy TODO: sprawdzic czy to lepiej
		img = img.resize(OUTPUT_IMAGE_SIZE)
		img.save(self.processedImageFile)

	def showRawImage(self):
		"Wyświetla obraz w formie przekazywanej do sieci neuronowej."
		img = pygame.image.load(self.processedImageFile)
		img.convert()
		img = pygame.transform.scale(img, PAINT_SIZE)
		self.rawImageScreen.blit(img, (0, 0))

	def writeResult(self):
		"Zapisuje wynik analizy obrazu."
		self.resultScreen.fill(GREY)
		text = self.font.render("Wynik analizy: ", True, BLACK)
		self.resultScreen.blit(text, (20,15))

	def handleEvents(self):
		for event in pygame.event.get():
			if event.type == pygame.QUIT:
				self.running = False
			elif event.type == pygame.KEYDOWN:
				self.keyDown(event.key)
			elif event.type == pygame.KEYUP:
				if event.key == pygame.K_ESCAPE:
					self.running = False
				self.keyUp(event.key)
			elif event.type == pygame.MOUSEBUTTONUP:
				self.mouseUp(event.button, event.pos)
			elif event.type == pygame.MOUSEBUTTONDOWN:
				self.mouseDown(event.button, event.pos)
			elif event.type == pygame.MOUSEMOTION:
				self.mouseMotion(event.buttons, event.pos, event.rel)



if __name__ == "__main__":
	gui = GUI()
	gui.mainLoop(40)

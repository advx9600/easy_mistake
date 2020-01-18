import pygame
import os
import sys

def main():
	pygame.init()
	pygame.font.init()
	screen = pygame.display.set_mode((320,240))
	while True:
		for evt in pygame.event.get():
			if evt.type == pygame.KEYDOWN:
				pygame.quit()
				pygame.font.quit()
				sys.exit()
				
		textsurf = pygame.Surface((320,240))
		screen.blit(textsurf,(0,0))
		
		font = pygame.font.SysFont(pygame.font.get_default_font(),100)
		surf = font.render("123456",True,(255,0,0))
		textsurf.blit(surf,(0,0))
		
		pygame.display.update()
			
if __name__ == '__main__':
	main()
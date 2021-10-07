#include "Renderer.h"
#include "Framebuffer.h"

#include <iostream>
#include <SDL.h>

int main(int, char**)
{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	SDL_Window* window = SDL_CreateWindow("GAT350", 100, 100, 800, 600, SDL_WINDOW_SHOWN);
	if (window == nullptr)
	{
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}

	// wait for keyboard enter to exit
	std::getchar();

	/*const int WIDTH = 800;
	const int HEIGHT = 600;

	std::unique_ptr<Renderer> renderer = std::make_unique<Renderer>();
	renderer->Initialize(WIDTH, HEIGHT);

	std::unique_ptr<Framebuffer> framebuffer = std::make_unique<Framebuffer>(renderer.get(), renderer->width, renderer->height);
	
	bool quit = false;
	SDL_Event event;
	while (!quit)
	{
		SDL_PollEvent(&event);
		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}

		framebuffer->Clear(color_t{ 0,0,0,0 });
		for (int i = 0; i < 100; i++) {
			framebuffer->DrawPoint(rand() % framebuffer->width, rand() % framebuffer->height, { 255,255,255,255 });
		}
		framebuffer->Update();

		renderer->CopyBuffer(framebuffer.get());
		renderer->Present();
	}
	*/

	SDL_Quit();

	return 0;
}

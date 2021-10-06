#pragma once
#include "SDL.h"
#include <memory>

using color_t = SDL_Color;

class Renderer
{
public:
	~Renderer();

	bool Initialize(int width, int height, bool fullscreen = false);

    void Present();

public:
	SDL_Window* window;
	SDL_Renderer* renderer;
    int width = 0;
    int height = 0;
};

#include <SDL2/SDL.h>

void OpenNewWindow() {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window* window = SDL_CreateWindow("My Window", 0, 0, 800, 600, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
}
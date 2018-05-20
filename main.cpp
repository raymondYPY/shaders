#include <cstdlib>
#include <iostream>
#include "Render.h"
#include "SDL2/SDL.h"

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);

      SDL_Window *window = SDL_CreateWindow(
        "PlayWithShaders",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        1920,
        1020,
        0
      );

      SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
      SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
      SDL_RenderClear(renderer);
      SDL_RenderPresent(renderer);

      SDL_Delay(50000);

        SDL_DestroyWindow(window);
        SDL_Quit();

        return 0;
}

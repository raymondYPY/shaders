#include "Display.h"

namespace display {

    Display::Display(int w, int h)
    {
        SDL_Init(SDL_INIT_VIDEO);

          SDL_Window *window = SDL_CreateWindow(
            "PlayWithShaders",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            w,
            h,
            0
          );

          SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
          SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
          SDL_RenderClear(renderer);
          SDL_RenderPresent(renderer);
          SDL_Delay(3000);
          _window = window;
    }

    Display::~Display()
    {
        SDL_DestroyWindow(_window);
        SDL_Quit();
    }

}

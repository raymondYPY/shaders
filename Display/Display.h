#ifndef DISPLAY_H
#define DISPLAY_H

#include "SDL2/SDL.h"

class Display
{
public:
    Display();
    Display(int w, int h);
    ~Display();

private:
    SDL_Window* _window;
};

#endif // DISPLAY_H

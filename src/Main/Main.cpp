#include <iostream>
#include <SDL3/SDL.h>

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO))
    {
        std::cout << "Hello, World!" << std::endl;
    }
    else
    {
        std::cout << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
    }
    
    system("pause");
    return 0;
}
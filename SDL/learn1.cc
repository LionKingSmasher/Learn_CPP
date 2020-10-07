#include <SDL2/SDL.h>

int main(int argc, char *argv[]){
    SDL_Window *screen;
    SDL_Renderer *renderer;
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_CreateWindow("TEST", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    renderer = SDL_CreateRenderer(screen, -1, 0);

    bool quit = false;
    SDL_Event event;
    while (!quit)
    {
        while(SDL_PollEvent(&event)){
            switch (event.type)
            {
                case SDL_QUIT:
                    quit = true;
                    break;
            }
        }
        SDL_Delay(1);
    }
    SDL_Quit();
}
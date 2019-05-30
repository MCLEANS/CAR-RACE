#include "graphics.hpp"
#include <iostream>

bool Graphics::init(){
    bool successs = true;
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0){
        std::cout<<"Failed to initialize SDL, ERROR: "<<SDL_GetError()<<std::endl;
        successs = false;
    }
    return successs;
}

bool Graphics::createWindowAndtexture(){
    bool success = true;

    window = SDL_CreateWindow("NEED FOR SPEED",
                                SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED,
                                WIDTH,
                                HEIGHT,
                                SDL_WINDOW_SHOWN
                                );

    if(window==NULL){
        std::cout<<"Failed to create window, ERROR: "<<SDL_GetError()<<std::endl;
        success=false;
        }
    
    renderer = SDL_CreateRenderer(window,
                                    -1,
                                    SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

    if(renderer==NULL){
        std::cout<<"Failed to create the renderer, ERROR: "<<SDL_GetError()<<std::endl;
        success=false;
        }
    
    return success;

}

Graphics::~Graphics(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}

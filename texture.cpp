#include "texture.hpp"
#include <string.h>

customTexture::customTexture(SDL_Renderer* renderer,std::string imagePath): imagePath(imagePath),
                                                                            renderer(renderer){
    loadedSurface = IMG_Load(this->imagePath.c_str());
    texture = SDL_CreateTextureFromSurface(renderer,
                                            loadedSurface);
    if(texture==NULL){
        std::cout<<"Failed to load texture, ERROR: "<<IMG_GetError()<<std::endl;

    }
    SDL_FreeSurface(loadedSurface);

}

customTexture::~customTexture(){
    SDL_DestroyTexture(texture);
}
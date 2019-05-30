#ifndef _TEXTURE_H
#define  _TEXTURE_H

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class customTexture{
    private:
    private:
        
    public:
    std::string imagePath;
    SDL_Texture* texture = NULL;
    SDL_Surface* loadedSurface = NULL;
    SDL_Renderer* renderer = NULL;

    public:
    customTexture(SDL_Renderer* renderer,std::string imagePath);
    ~customTexture();
};


#endif //_TEXTURE_H
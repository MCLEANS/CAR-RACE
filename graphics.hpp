#ifndef _GRAPHICS_HPP
#define _GRAPHICS_HPP

#include <SDL.h>

class Graphics{
    private:
    private:
    public:

    const int WIDTH = 860;
    const int HEIGHT = 640;
    SDL_Window * window = NULL;
    SDL_Renderer* renderer = NULL;
  
 


    public:
    
    bool init();
    bool createWindowAndtexture();
    ~Graphics();

};




#endif //_GRAPHICS_HPP 
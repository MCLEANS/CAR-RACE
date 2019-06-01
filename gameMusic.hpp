#ifndef _GAMEMUSIC_HPP
#define _GAMEMUSIC_HPP

#include <SDL.h>
#include <SDL_mixer.h>
#include <iostream>

class gameMusic{
    private:
    private:
    public:
    Mix_Music* gameSound = NULL ;
    Mix_Chunk* carStart = NULL ;



    public:
    gameMusic();
    ~gameMusic();

};



#endif //_GAMEMUSIC_HPP
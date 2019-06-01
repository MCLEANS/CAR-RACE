#include "gameMusic.hpp"

gameMusic::gameMusic(){
    auto initMixer = [=](){
        if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048)<0){
            std::cout<<"Failed to initialize the Mixer, ERROR: "<<Mix_GetError()<<std::endl;
            }
    };
    initMixer();

    gameSound = Mix_LoadMUS("sounds/gameSound.wav");
    if(gameSound==NULL) {
        std::cout<<"Failed to load game sound, ERROR: "<<Mix_GetError()<<std::endl;
        }
    carStart = Mix_LoadWAV("sounds/carStart.wav");
    if(carStart==NULL){
        std::cout<<"Failed to load car start sound, ERROR: "<<Mix_GetError()<<std::endl;
    }
    

}

gameMusic::~gameMusic(){
    Mix_Quit();
}
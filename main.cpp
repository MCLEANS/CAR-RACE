#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.hpp"
#include "texture.hpp"


using namespace std;


int main(void){

    Graphics gameGraphics;
    
    gameGraphics.init();
    gameGraphics.createWindowAndtexture();
    customTexture playerVehicle(gameGraphics.renderer,"images/car.png");
    customTexture firstEnemyCar(gameGraphics.renderer,"images/car-red.png");
    customTexture secondEnemyCar(gameGraphics.renderer,"images/car-red.png");
    customTexture thirdEnemyCar(gameGraphics.renderer,"images/car-red.png");

    SDL_Event event;
    bool quit = false;
    SDL_Rect playerCarRect={100,
                    300,
                    100,
                    200};
    SDL_Rect enemyFirstCar={300,
                            300,
                            100,
                            200};
    SDL_Rect enemySecondCar= {500,
                            300,
                            100,
                            200};
    SDL_Rect enemyThirdCar = {700,
                            300,
                            100,
                            200};

    while(!quit){
        SDL_SetRenderDrawColor(gameGraphics.renderer,
                                0XFF,
                                0XFF,
                                0XFF,
                                0X00);
        SDL_RenderClear(gameGraphics.renderer);

        SDL_RenderCopy(gameGraphics.renderer,
                        playerVehicle.texture,
                        NULL,
                        &playerCarRect);

        SDL_RenderCopy(gameGraphics.renderer,
                        firstEnemyCar.texture,
                        NULL,
                        &enemyFirstCar);

        SDL_RenderCopy(gameGraphics.renderer,
                        secondEnemyCar.texture,
                        NULL,
                        &enemySecondCar);

        SDL_RenderCopy(gameGraphics.renderer,
                        thirdEnemyCar.texture,
                        NULL,
                        &enemyThirdCar);

        SDL_RenderPresent(gameGraphics.renderer);

        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT) quit=true;

        }
    }


    return 0;
}
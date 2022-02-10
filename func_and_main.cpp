#include <iostream> 
#include <SDL.h> 
#include <vector> 
#define WINDOW_SIZE 1000

using namespace std;

void it_horizontalLine(SDL_Renderer *renderer, int x, int y, int len){    

    int n;
    if(len != 0){
        for(n = 0; n < len; n++){
            SDL_RenderDrawPoint(renderer, x + n , y );
        }
    }
}

void it_verticalLine(SDL_Renderer *renderer, int x, int y, int len){
    int n;
    if(len != 0){
        for(n = 0; n < len; n++){
            SDL_RenderDrawPoint(renderer, x, y + n );
        }
    }
}

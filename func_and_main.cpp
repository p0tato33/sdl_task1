#include <iostream> 
#include <SDL.h> 
#include <vector> 
#define WINDOW_SIZE 1000

using namespace std;

void itc_horizontalLine(SDL_Renderer *renderer, int x, int y, int len){    

    int n;
    if(len != 0){
        for(n = 0; n < len; n++){
            SDL_RenderDrawPoint(renderer, x + n , y );
        }
    }
}

void itc_verticalLine(SDL_Renderer *renderer, int x, int y, int len){
    int n;
    if(len != 0){
        for(n = 0; n < len; n++){
            SDL_RenderDrawPoint(renderer, x, y + n );
        }
    }
}

void itc_verticalDiagram(SDL_Renderer *render, vector<int>num){

    for (int i = 0; i < num.size(); i++){
        itc_verticalLine(render, 10 + 100 * i, 1000, numbers[i]);
    }

}

void itc_horizontalDiagram(SDL_Renderer *render, vector<int>num){
    for (int i = 0; i < numbers.size(); i++){
        itc_horizontalLine(render, 1000, 100 + 10 * i, numbers[i]);
    }
}

int main( int argc, char* args[] )
{
    SDL_Renderer *renderer;
    SDL_Window *window;
    SDL_Init( SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(WINDOW_SIZE, WINDOW_SIZE, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    itc_verticalLine(renderer, 0, 1000, 1000);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}

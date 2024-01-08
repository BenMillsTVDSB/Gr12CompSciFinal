#include <stdlib.h>// For random number generator
#include "Platformer.hpp"
#include "Breakout.hpp"
#include "SlidingPuzzle.hpp"
#include "raylib.h"
#include "time.h"

enum gameMode {slidingPuzzle, breakout, platformer};

int main()
{
    gameMode currentMode = slidingPuzzle;
    
    InitWindow(1000, 600, "Placeholder");
    
    srand(time(NULL));// We will probably need rng later on.
    
    SetTargetFPS(60);
    
    // Gameplay loop
    while(!WindowShouldClose())
    {
        switch(currentMode)
        {
            case slidingPuzzle:
                updateSlidingPuzzle();
                break;
            case breakout:
                updateBreakout();
                break;
            case platformer:
                updatePlatformer();
                break;
        }
    }
}
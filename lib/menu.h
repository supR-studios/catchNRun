#include "imports.h"


int menu(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "catch&run launcher");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        if(IsKeyDown('1')){
            return 1;
        }else if(IsKeyDown('2')){
            return 2;
        }

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("catch&run", 190, 20, 20, BLACK);
            DrawText("1: play casual",190,100,20,BLACK);
            DrawText("2: play horror",190,120,20,BLACK);

        EndDrawing();
    }

    CloseWindow(); 

    return 0;
}
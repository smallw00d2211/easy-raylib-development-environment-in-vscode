#include "raylib.h"

int SampleGame() {

    // Window Dimensions
    const int windowWidth{512};
    const int windowHeight{512};

    // initialize the window
    InitWindow(windowWidth, windowHeight, "Sample Game!");

    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("Welcome!", 30, 30, 26, RED);
        DrawText("This is a sample game!", 30, 60, 26, BLUE);
        DrawText("Made with Raylib!", 30, 180, 26, GREEN);
        EndDrawing();
    }
    CloseWindow();
}
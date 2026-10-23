#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "My raylib app");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Woah!!", 20, 20, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

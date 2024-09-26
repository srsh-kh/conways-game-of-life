#include <raylib.h>
#include "grid.hpp"

int main()
{
    Color GREY = {29, 29, 29, 255};
    const int WINDOW_WIDTH = 750;
    const int WINDOW_HEIGHT = 750;
    const int CELL_SIZE = 25;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Grid grid(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);
    grid.SetValue(0, 0, 1);
    grid.SetValue(2, 1, 1);

    while (WindowShouldClose() == false)
    {

        BeginDrawing();
        ClearBackground(GREY);
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();
}
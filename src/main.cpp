#include <raylib.h>
#include <iostream>
#include "simulation.hpp"

int main()
{
    Color GREY = {29, 29, 29, 255};
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 800;
    const int CELL_SIZE = 24;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);

    while (WindowShouldClose() == false)
    {
        if(IsKeyPressed(KEY_ENTER))
        {
            simulation.Start();
            SetWindowTitle("Game if Life is running...");
        }
        else if(IsKeyPressed(KEY_SPACE))
        {
            simulation.Stop();
            SetWindowTitle("Game of Life has stopped...");
        }

        simulation.Update();

        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
    }

    CloseWindow();
}
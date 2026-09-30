
#include <fmt/core.h>
#include <raylib.h>


import types;
import tick;


auto main() -> s32
{
    InitWindow(800, 600, "pendulum");
    SetTargetFPS(60);


    TickClock tick_clock{};

    while (!WindowShouldClose())
    {
        u32 remaining_ticks{};
        while (tick_clock.ready() && remaining_ticks < MAX_TICKS_PER_FRAME)
        {
            tick();
            tick_clock.consume();
            ++remaining_ticks;
        }




        ClearBackground(DARKGRAY);
        BeginDrawing();
            DrawCircle(400, 300, 25, RED);
        EndDrawing();
    }

    CloseWindow();
}


#include <fmt/core.h>
#include <cmath>
#include <raylib.h>


import types;
import tick;
import pendulum;
import physics;


auto main() -> s32
{
    InitWindow(800, 600, "pendulum");
    SetTargetFPS(60);


    Pendulum pendulum;
    pendulum.amplitude = PI / 5.f;
    pendulum.length = 250.f;



    TickClock tick_clock{};

    while (!WindowShouldClose())
    {
        tick_clock.update();
        u32 remaining_ticks{};
        while (tick_clock.ready() && remaining_ticks < MAX_TICKS_PER_FRAME)
        {
            tick(pendulum, static_cast<f32>(tick_clock.tick) * static_cast<f32>(TICK_TIME));
            tick_clock.consume();
            ++remaining_ticks;
        }




        ClearBackground(DARKGRAY);
        BeginDrawing();
            DrawCircleV({static_cast<f32>(400.0 + (std::sin(pendulum.amplitude) * pendulum.length)), static_cast<f32>(300.0 + (std::cos(pendulum.amplitude) * pendulum.length))}, 25, RED);
            DrawLineV({400.f, 300.f}, {static_cast<f32>(400.0 + (std::sin(pendulum.amplitude) * pendulum.length)), static_cast<f32>(300.0 + (std::cos(pendulum.amplitude) * pendulum.length))}, RED);
        EndDrawing();
    }

    CloseWindow();
}

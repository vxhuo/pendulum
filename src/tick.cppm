
module;

#include <chrono>
#include <cmath>
#include <algorithm>
#include <fmt/core.h>

export module tick;


import types;
import physics;
import pendulum;


export constexpr u32 TICK_RATE = 150;
export constexpr f64 TICK_TIME = 1.f / TICK_RATE;
export constexpr u32 MAX_TICKS_PER_FRAME = 10;
export constexpr f64 MAX_TICK_TIMEOUT = 0.25;


export struct TickClock final
{
    TimePoint previous{Clock::now()};
    f64 accumulator{};
    u64 tick{};

    auto update() -> void;

    [[nodiscard]]
    auto ready() const -> bool;
    auto consume() -> void;
};

auto TickClock::update() -> void
{
    const TimePoint now = Clock::now();
    accumulator += std::min(std::chrono::duration<f64>(now - previous).count(), MAX_TICK_TIMEOUT);
    previous = now;
}

auto TickClock::ready() const -> bool
{
    return accumulator >= TICK_TIME;
}

auto TickClock::consume() -> void
{
    accumulator -= TICK_TIME;
    ++tick;
}


export auto tick(Pendulum &pendulum, f32 t) -> void
{
    static const f64 theta_0 = pendulum.amplitude;
    const f64 omega = std::sqrt(GRAVITY / pendulum.length);
    const f64 new_theta = theta_0 * std::cos(omega * t);
    pendulum.amplitude = new_theta;


    fmt::println("theta_0   = {}", theta_0);
    fmt::println("new_theta = {}", new_theta);
    fmt::println("omega     = {}", omega);
}

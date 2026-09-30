
module;

#include <chrono>

export module tick;


import types;


export constexpr u32 TICK_RATE = 50;
export constexpr f32 TICK_TIME = 1.f / TICK_RATE;
export constexpr u32 MAX_TICKS_PER_FRAME = 10;
export constexpr f64 MAX_TICK_TIMEOUT = 0.25f;


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
    previous = now;
    accumulator += std::min(std::chrono::duration<f64>(now - previous).count(), MAX_TICK_TIMEOUT);
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


export auto tick() -> void
{
    
}

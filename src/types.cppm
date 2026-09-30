
module;

#include <cstdint>
#include <cstddef>

#include <expected>
#include <optional>
#include <variant>

#include <vector>
#include <inplace_vector>
#include <array>
#include <span>

#include <string>
#include <string_view>

#include <chrono>

#include <memory>

#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>

#include <ranges>

#include <functional>

export module types;


export
{

using u8  = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using s8  = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;
using s64 = std::int64_t;

using f32 = float;
using f64 = double;

using usize = std::size_t;
using isize = std::ptrdiff_t;

using uptr = std::uintptr_t;
using iptr = std::intptr_t;




using Byte = std::byte;

template <usize N>
using ByteBuf = std::array<Byte, N>;
using Bytes   = std::span<Byte>;
using CBytes  = std::span<const Byte>;




using Str     = std::string;
using StrView = std::string_view;




template <typename T>
using Vec = std::vector<T>;

template <typename T, usize N>
using IVec = std::inplace_vector<T, N>;

template <typename T, usize N>
using Array = std::array<T, N>;

template <typename T>
using Span = std::span<T>;

template <typename T>
using CSpan = std::span<const T>;




template <typename T>
using Maybe = std::optional<T>;

constexpr auto Nothing = std::nullopt;

template <typename T, typename E>
using Either = std::expected<T, E>;

template <typename... Ts>
using Variant = std::variant<Ts...>;




template <typename T>
using Unique = std::unique_ptr<T>;

template <typename T>
using Shared = std::shared_ptr<T>;

template <typename T>
using Weak = std::weak_ptr<T>;




template <typename T>
using Ref = std::reference_wrapper<T>;

template <typename T>
using CRef = std::reference_wrapper<const T>;




using Clock     = std::chrono::steady_clock;
using TimePoint = Clock::time_point;
using Duration  = Clock::duration;

using Ns = std::chrono::nanoseconds;
using Us = std::chrono::microseconds;
using Ms = std::chrono::milliseconds;
using Sec = std::chrono::seconds;
using Min = std::chrono::minutes;
using Hr = std::chrono::hours;


}

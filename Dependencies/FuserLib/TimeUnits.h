#pragma once

#include <chrono>

namespace mage
{
    using hundred_nanoseconds = std::chrono::duration<int64_t, std::ratio<1, 10000000>>;
}
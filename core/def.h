#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <cmath>
#include <chrono>
#include <vector>
#include <array>
#include <unordered_map>
#include <cassert>
#include <algorithm>
#include <bitset>
#include <bit>
#include <thread>
#include <mutex>
#include <atomic>
#include <optional>
#include <x86intrin.h>
#include <condition_variable>
#include <stdalign.h>
#include "avec.h"
#include "hash.h"

typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

static inline u16 pext16(u16 input, u16 mask)
{
    return _pext_u32(u32(input), u32(mask));
};
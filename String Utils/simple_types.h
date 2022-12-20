#pragma once
#include <string>
#include <vector>
#include <array>
#include <list>

typedef std::string String;
typedef int Int;
typedef int64_t Int64;
typedef double Double;
typedef float Float;
typedef size_t Size;

template <typename T>
using Vector = std::vector<T>;

template <typename T, Size S>
using Array = std::array<T, S>;

template <typename T>
using List = std::list<T>;

template <typename T, typename Y>
using Pair = std::pair<T, Y>;
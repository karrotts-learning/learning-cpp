// Old way of doing header guards
// ensures that the header is read in only once when included.
// prevents transitve functions from being read in multiple times
#ifndef HEADER_GUARD_H
#define HEADER_GUARD_H
void foo();
#endif

// New way - does the same as above
#pragma once
void bar();

// BEST PRACTICE:
// Use the old header guards since #pragma once is not supported by C++
// also ensures maximum compatibility
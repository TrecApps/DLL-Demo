#pragma once

#ifndef LOW_LIBRARY
#define LOW_LIBRARY __declspec(dllexport)

#else
#define LOW_LIBRARY __declspec(dllimport)
#endif
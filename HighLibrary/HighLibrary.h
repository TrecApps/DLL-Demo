#pragma once

#ifndef HIGH_LIBRARY
#define HIGH_LIBRARY __declspec(dllexport)

#else
#define HIGH_LIBRARY __declspec(dllimport)
#endif
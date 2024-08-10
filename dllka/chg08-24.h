#pragma once
#ifndef WOKRBCH_LIB
#define WOKRBCH_LIB_API __declspec(dllexport)
#else
#define WOKRBCH_LIB_API __declspec(dllimport)
#endif
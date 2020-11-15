#pragma once

#ifdef ESSFUNC_EXPORTS
#define ESSFUNC_API __declspec(dllexport)
#else
#define ESSFUNC_API __declspec(dllimport)
#endif

ESSFUNC_API void EssentialFunc1();

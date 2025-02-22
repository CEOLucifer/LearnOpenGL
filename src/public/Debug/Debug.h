#pragma once

#include "Debug/Debugable.h"
#include "Debugable.h"
#include <iostream>

class Debug
{
public:
    static void Log(const Debugable& debugable)
    {
        std::cout << debugable.info << std::endl;
    }

    static void LogWarning(const Debugable& debugable)
    {
        std::cout << std::format("\033[0m\033[33m{}\033[0m", debugable.info)
                  << std::endl;
    }

    static void LogError(const Debugable& debugable)
    {
        std::cout << std::format("\033[0m\033[31m{}\033[0m", debugable.info)
                  << std::endl;
    }
};
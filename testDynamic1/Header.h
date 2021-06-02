#pragma once


#include <iostream>
#include <string>

extern "C" __declspec(dllexport) int MyGroup(int group);

extern "C" __declspec(dllexport) std::string MyName(const char* name);
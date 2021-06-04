#pragma once


#include <iostream>
#include <string>

extern "C" __declspec(dllexport) int MyGroup(int group);

extern "C" __declspec(dllexport) void MyName(char* name);
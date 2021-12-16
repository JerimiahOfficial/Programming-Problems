#pragma once
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

namespace Util {
	extern void Print(std::string s, std::vector<int> vi);
	extern void Print(std::string s, int i);

	extern int RandomInRange(int i);
}
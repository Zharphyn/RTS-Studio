#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class Writer
{
public:
	Writer();
	~Writer();
	// Standardizes how strings are written to the screen
	static void WriteToScreen(string OutPut);
	static void WriteToScreen(string OutPut, string FillIn);
	static void WriteToScreen(string OutPut, string FillIn1, string FillIn2);
	static void WriteToScreen(string OutPut, string FillIn1, string FillIn2, string FillIn3);

};


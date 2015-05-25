// TestingConsole.cpp : main project file.

#include "stdafx.h"

using namespace System;

bool perfecto(int n)
{
	int counter = 0;
	
	if(n < 0)
		n = -n;	
	
	for(int x = 1; x < n; x++)
	{
		if(n % x == 0)
		counter += x;
	}
	
	return (counter == n);
}

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Hello World");
    return 0;
}

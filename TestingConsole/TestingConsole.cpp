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
//calcula si el numero es primo 
bool Numero_Primo(int numero)
{
    if(numero > 2 )
    {
	for (int x = 2; x < numero; x++)
	{
		if (numero % x == 0)
		{
			return false;
		}
	}
        return true;
    }
    
    if(numero == 2)
    {
    	return true;
    }
    else return false;
   
}

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Hello World");
    
    if(perfecto(6))
    	Console::WriteLine("Mi funcion funciona bien XD");
    	
    if(Numero_Primo(7))
       Console::WriteLine("Tambien la mia Lol");
//desde visual studio agrege esto solo ignora lo que agrege vs
	Console::ReadLine();

    
    return 0;
}

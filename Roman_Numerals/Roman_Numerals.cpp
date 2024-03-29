// Roman_Numerals.cpp 
// Author: Nathan Lesmann
// Title: Roman Numbers
// Last updated: November 15th, 2018
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

std::string toLongRoman(int value); 

int main()
{	
	toLongRoman(3500);

	return 0;
	
}


std::string toLongRoman(int value)
{
	int amountOfLetters = 0;
	std::string romanNumerals = " ";

	if (value >= 1000)
	{
		amountOfLetters = (value / 1000);

		for (int index = 0; index < amountOfLetters; index++)
		{
			romanNumerals += 'M';
		}
		value %= 1000;
	}
	if (value >= 500)
	{
		amountOfLetters = (value / 500);

		for (int index = 0; index < amountOfLetters; index++)
		{
			romanNumerals += 'D';
		}
		value %= 500;
	}
	std::cout << romanNumerals;

	return romanNumerals;
}
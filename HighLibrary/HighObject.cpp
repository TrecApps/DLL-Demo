#include "pch.h"
#include "HighObject.h"

#include <iostream>

/**
 * Method: HighObject::LowObject
 * Purpose: Constructor
 * Parameters: int i - an integer to add
 *				char c - a character to add
 * Returns: New High-Library Object
 */
HighObject::HighObject(int i, char c) : obj(c)
{
	integer = i;
}

/**
 * Method: HighObject::Print
 * Purpose: Prints out the details of the object
 * Parameters: void
 * Returns: void
 */
void HighObject::Print()
{
	std::cout << "High Library Object with integer '" << integer << "' and a";
	obj.Print();
}

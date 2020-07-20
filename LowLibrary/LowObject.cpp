#include "pch.h"
#include "LowObject.h"

#include <iostream>


/**
 * Method: LowObject::LowObject
 * Purpose: Constructor
 * Parameters: char c - a character to add
 * Returns: New Low-Library Object
 */
LowObject::LowObject(char c)
{
	character = c;
}


/**
 * Method: LowObject::Print
 * Purpose: Prints out the details of the object
 * Parameters: void
 * Returns: void
 */
void LowObject::Print()
{
	std::cout << "Low Level Library Object with charcater '" << character << "'\n";
}

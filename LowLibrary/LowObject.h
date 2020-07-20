#pragma once

#include "LowLevel.h"

/**
 * Class: LowObject
 * Purpose: Demo class for a lower level library
 */
class LOW_LIBRARY LowObject
{
public:
	/**
	 * Method: LowObject::LowObject
	 * Purpose: Constructor
	 * Parameters: char c - a character to add
	 * Returns: New Low-Library Object
	 */
	LowObject(char c);

	/**
	 * Method: LowObject::Print
	 * Purpose: Prints out the details of the object
	 * Parameters: void
	 * Returns: void
	 */
	void Print();

private:
	/**
	 * the character to make objects of this class somewhat unique
	 */
	char character;
};


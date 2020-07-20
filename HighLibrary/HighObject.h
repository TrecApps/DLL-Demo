#pragma once

#include "HighLibrary.h"
#include <LowObject.h>


/**
 * Class: LowObject
 * Purpose: Demo class for a lower level library
 */
class HIGH_LIBRARY HighObject
{
public:

	/**
	 * Method: HighObject::LowObject
	 * Purpose: Constructor
	 * Parameters: int i - an integer to add
	 *				char c - a character to add
	 * Returns: New High-Library Object
	 */
	HighObject(int i, char c);

	/**
	 * Method: HighObject::Print
	 * Purpose: Prints out the details of the object
	 * Parameters: void
	 * Returns: void
	 */
	void Print();

private:
	/**
	 * The Low Level Object to demonstrate a library using another library
	 */
	LowObject obj;

	/**
	 * It was something to add to the high object
	 */
	int integer;
};


#include "FizzBuzzerIs5Or3.h"
#include <stdlib.h>
std::string FizzBuzzerIs5Or3::getNextString() {
	std::string s = "";
	char buffer[100];

	if      (!hasNextString()) s = "";
	else if ((0 == (current % 3)) && (0 == (current % 5))) s = "FizzBuzz";
	else if (0 == (current % 3)) s = "Fizz";
	else if (0 == (current % 5)) s = "Buzz";
	else { // s = std::to_string(current); // w C++11
		itoa(current, buffer, 10);
		s = std::string(buffer);
	}

	current++;
	return s;
}
FizzBuzzerIs5Or3::FizzBuzzerIs5Or3(int a_start, int a_end ) : FizzBuzzer(a_start,a_end)
{
    //ctor
}

FizzBuzzerIs5Or3::~FizzBuzzerIs5Or3()
{
    //dtor
}

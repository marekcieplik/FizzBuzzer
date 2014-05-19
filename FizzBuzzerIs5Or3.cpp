#include "FizzBuzzerIs5Or3.h"
#include <stdlib.h>
std::string FizzBuzzerIs5Or3::getNextString() {
<<<<<<< HEAD
	std::string s = "";
=======
	std::string s;
>>>>>>> 1fc83578bbc3ba2409ecce6847a80c265cfc6aee
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
<<<<<<< HEAD
FizzBuzzerIs5Or3::FizzBuzzerIs5Or3(int a_start, int a_end ) : FizzBuzzer(a_start,a_end)
=======
FizzBuzzerIs5Or3::FizzBuzzerIs5Or3() : FizzBuzzer::FizzBuzzer(int a_start = 1, int a_end = 100)
>>>>>>> 1fc83578bbc3ba2409ecce6847a80c265cfc6aee
{
    //ctor
}

FizzBuzzerIs5Or3::~FizzBuzzerIs5Or3()
{
    //dtor
}

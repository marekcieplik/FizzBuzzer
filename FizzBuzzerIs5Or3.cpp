#include "FizzBuzzerIs5Or3.h"
#include <stdlib.h>
//public
std::string FizzBuzzerIs5Or3::getNextString() {
	std::string s = "";
	char buffer[100];

	if      (!hasNextString()) s = "";
	else if ((isThree(current)) && (isFive(current))) s = "FizzBuzz";
	else if (isThree(current)) s = "Fizz";
	else if (isFive(current)) s = "Buzz";
	else { // s = std::to_string(current); // w C++11
		itoa(current, buffer, 10);
		s = std::string(buffer);
	}
	current++;
	return s;
}

bool FizzBuzzerIs5Or3::hasNextString(){
    return (current <= end);
}

void FizzBuzzerIs5Or3::reset() {
	current = start;
}

FizzBuzzerIs5Or3::FizzBuzzerIs5Or3(int a_start, int a_end ) :start(a_start), end(a_end), current(a_start){
    //ctor
}

FizzBuzzerIs5Or3::~FizzBuzzerIs5Or3(){
    //dtor
}

//private
bool FizzBuzzerIs5Or3::isThree(int n){   //source from http://p22.symfony.gajdaw.pl/rozdzial/cyfry_liczb.html
    int robn = n;
    int ostatniacyfra = n % 10;
    while(robn) {
        if ( ostatniacyfra == 3 ) return true;
        robn /= 10;
        ostatniacyfra = robn % 10;
    }
    return false;
}

bool FizzBuzzerIs5Or3::isFive(int n){
    int robn = n;
    int ostatniacyfra = n % 10;
    while(robn) {
        if (ostatniacyfra == 5 ) return true;
        robn /= 10;
        ostatniacyfra = robn % 10;
    }
    return false;
}

#include <iostream>
#include "FizzBuzzer.h"
#include "FizzBuzzerIs5Or3.h"
using namespace std;

//testy do FizzBuzzerIs5Or3.h
bool FizzBuzzerIs5Or3_test_OneIsDigit(){
	FizzBuzzerIs5Or3 f(1,1);

	if ( f.hasNextString() &&
		("1" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_ThreeIsFizz(){
	FizzBuzzerIs5Or3 f(3,3);

	if ( f.hasNextString() &&
		("Fizz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_FiveIsBuzz(){
	FizzBuzzerIs5Or3 f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_FifteenIsBuzz(){
	FizzBuzzerIs5Or3 f(15,15);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_EmptyRange(){
	FizzBuzzerIs5Or3 f(2,1);

	if ( !f.hasNextString() &&
		("" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_ResetResets(){
	FizzBuzzerIs5Or3 f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()) &&
		 !f.hasNextString() )
	{
		f.reset();
		if ( f.hasNextString() &&
		   ("Buzz" == f.getNextString()))
		   return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_SanityTest(){
	FizzBuzzerIs5Or3 f;

	if (f.hasNextString())
	{
		return true;
	}

	return false;
}

bool FizzBuzzerIs5Or3_test_FiftyThreeIsFizzBuzz(){
	FizzBuzzerIs5Or3 f(53,53);

	if (f.hasNextString()&&
        ("FizzBuzz" == f.getNextString()) )
	{
		return true;
	}

	return false;
}

void testIs5Or3()
{
	if (FizzBuzzerIs5Or3_test_SanityTest()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_OneIsDigit()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_ThreeIsFizz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_FiveIsBuzz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_FifteenIsBuzz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_EmptyRange()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzerIs5Or3_test_ResetResets()) {

		cout << ".";
	} else {
		cout << "x";
	}
    if (FizzBuzzerIs5Or3_test_FiftyThreeIsFizzBuzz()) {

		cout << ".";
	} else {
		cout << "x";
	}
}

//testy do FizzBuzzer.h
bool FizzBuzzer_test_OneIsDigit(){
	FizzBuzzer f(1,1);

	if ( f.hasNextString() &&
		("1" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_ThreeIsFizz(){
	FizzBuzzer f(3,3);

	if ( f.hasNextString() &&
		("Fizz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_FiveIsBuzz(){
	FizzBuzzer f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_FifteenIsFizzBuzz(){
	FizzBuzzer f(15,15);

	if ( f.hasNextString() &&
		("FizzBuzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_EmptyRange(){
	FizzBuzzer f(2,1);

	if ( !f.hasNextString() &&
		("" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_ResetResets(){
	FizzBuzzer f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()) &&
		 !f.hasNextString() )
	{
		f.reset();
		if ( f.hasNextString() &&
		   ("Buzz" == f.getNextString()))
		   return true;
	}

	return false;
}

bool FizzBuzzer_test_SanityTest(){
	FizzBuzzer f;

	if (f.hasNextString())
	{
		return true;
	}

	return false;
}

void test()
{
	if (FizzBuzzer_test_SanityTest()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_OneIsDigit()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_ThreeIsFizz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_FiveIsBuzz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_FifteenIsFizzBuzz()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_EmptyRange()) {
		cout << ".";
	} else {
		cout << "x";
	}
	if (FizzBuzzer_test_ResetResets()) {
		cout << ".";
	} else {
		cout << "x";
	}
}
int main() {
	test();
	std::cout<<endl;
	testIs5Or3();
	return 0;
}

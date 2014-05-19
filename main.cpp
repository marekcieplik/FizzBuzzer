#include <iostream>
//#include "FizzBuzzer.h"
#include "FizzBuzzerIs5Or3.h"

using namespace std;

int main()
{
	//FizzBuzzerIs5Or3 f(1,15);
    FizzBuzzerIs5Or3 f(1,33);
	while (f.hasNextString()){
		cout << f.getNextString() << endl;
	}

    return 0;
}


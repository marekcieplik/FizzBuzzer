#include <iostream>
#include "FizzBuzzer.h"

using namespace std;

int main()
{
	FizzBuzzer f(1,15);

	while (f.hasNextString()){
		cout << f.getNextString() << endl;
	}
	
    return 0;
}


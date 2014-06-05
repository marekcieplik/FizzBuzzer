#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


bool isThree(int n){
    int robn = n;
    int ostatniacyfra = n % 10;
    while(robn)
    {
        if ( (ostatniacyfra == 3) || (ostatniacyfra == - 3)) return true;
        robn /= 10;
        ostatniacyfra = robn % 10;
    }
	return false;
}

bool isFive(int n){
    int robn = n;
    int ostatniacyfra = n % 10;
    while(robn)
    {
        if ( (ostatniacyfra == 5) || (ostatniacyfra == - 5) ) return true;
        robn /= 10;
        ostatniacyfra = robn % 10;
    }
	return false;
}

int main()
{

	for (int i = -50; i < 50; i ++){
        if ( (isThree(i)) && (isFive(i)) && ( i != 0) ) {cout <<"FizzBuzz" << endl;}
        else if ( (isThree(i)) && i != 0 ) { cout <<"Fizz" << endl;}
        else if ( (isFive(i)) && i != 0 ) { cout <<"Buzz" << endl;}
        else {cout << i << endl;}
    }
	
    return 0;
}


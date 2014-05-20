#ifndef FIZZBUZZERIS5OR3_H
#define FIZZBUZZERIS5OR3_H

#include "IFizzBuzzer.h"

class FizzBuzzerIs5Or3 : public IFizzBuzzer {
public:
    std::string getNextString();
    bool hasNextString();
    void reset();
    FizzBuzzerIs5Or3(int a_start = 1, int a_end = 100);
    virtual ~FizzBuzzerIs5Or3();

protected:
private:
    bool isThree(int);
    bool isFive(int);

    int start;
    int end;
    int current;
};

#endif // FIZZBUZZERIS5OR3_H

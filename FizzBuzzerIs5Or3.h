#ifndef FIZZBUZZERIS5OR3_H
#define FIZZBUZZERIS5OR3_H

#include <FizzBuzzer.h>


class FizzBuzzerIs5Or3 : public FizzBuzzer
{
    public:
        std::string getNextString();
        FizzBuzzerIs5Or3(int, int);
        virtual ~FizzBuzzerIs5Or3();
    protected:
    private:
        bool isThree(int);
        bool isFive(int);

};

#endif // FIZZBUZZERIS5OR3_H

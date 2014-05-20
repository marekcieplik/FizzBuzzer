#ifndef IFIZZBUZZER_H
#define IFIZZBUZZER_H
#include <iostream>

class IFizzBuzzer
{
public:
    virtual std::string getNextString() = 0;
	virtual bool hasNextString() = 0;
	virtual void reset() = 0;
};

#endif // IFIZZBUZZER_H

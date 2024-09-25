#ifndef PEOPLE_H
#define PEOPLE_H

#include "RaffleStorage.h"

#include <string>
using namespace std;

class People{

private:
string name, phoneNumber;
int entries;

public:

People();
void SetName(const string& newName);
void SetPhoneNumber(const string& newPhone);
void SetEntries(int newEntries);
string GetName() const;
string GetPhoneNumber() const;
int GetEntries() const;


};


#endif

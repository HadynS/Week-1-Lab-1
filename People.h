#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

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
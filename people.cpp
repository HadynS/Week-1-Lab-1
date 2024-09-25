#include "People.h"
#include <string>

People::People() : name(""), phoneNumber(""), entries(0) {}

void People::SetName(const string& newName){

    name = newName;
}

void People::SetPhoneNumber(const string& newPhone){

    phoneNumber = newPhone;
}

void People::SetEntries(int newEntries){

    entries = newEntries;
}

string People::GetName() const{

    return name;
}

string People::GetPhoneNumber() const {

    return phoneNumber;
}

int People::GetEntries() const{

    return entries;
}
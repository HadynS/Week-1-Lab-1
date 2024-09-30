#include "Participant.h"
#include <iostream>

// Constructor
Participant::Participant(const string& firstName, const string& lastName, const string& phoneNumber, const string& address)
    : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), address(address), next(nullptr) {}

// Getters
string Participant::getFirstName() const 
{
    return firstName;
}

string Participant::getLastName() const 
{
    return lastName;
}

string Participant::getPhoneNumber() const 
{
    return phoneNumber;
}

string Participant::getAddress() const 
{
    return address;
}

// Method to print participant details
void Participant::printParticipant() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Address: " << address << endl;
}

#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>

using namespace std;

// Data class
class Participant {
public:
    Participant();
    Participant(const string& firstname,const string& lastname, const string& phoneNumber, const string& address);
    string getFirstName() const;
    string getLastName() const;
    string getPhoneNumber() const;
    string getAddress() const;
    void printParticipant() const;

private:
    string firstName;
    string lastName;
    string phoneNumber;
    string address;
    Participant* next;
};

#endif
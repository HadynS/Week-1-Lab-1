#include "RaffleSystem.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
RaffleSystem::RaffleSystem() {}

// Method to load participants
void RaffleSystem :: loadParticipants() 
{
    ifstream inputFile("Participants.txt");
    if (!inputFile.is_open())
    {
        cout << "Error opening file: " << "Participants.txt" << endl;
        return;
    }

    string firstName, lastName, phoneNumber, address;
    while (inputFile >> firstName >> lastName >> phoneNumber >> address) 
    {
        Participant* participant = new Participant(firstName, lastName, phoneNumber, address);
        raffle.addParticipant(participant);
    }

    inputFile.close();
}

// Method to add a participant
void RaffleSystem :: addParticipant()
{
    string firstName, lastName, phoneNumber, address;
    cout << "Enter participant first name: ";
    cin >> firstName;
    cout << "Enter participant last name: ";
    cin >> lastName;
    cout << "Enter participant phone number: ";
    cin >> phoneNumber;
    cout << "Enter participant address: ";
    cin.ignore(); 
    getline (cin,address);
    Participant* participant = new Participant(firstName, lastName, phoneNumber, address);
    raffle.addParticipant(participant);
}

// Method to draw winner
void RaffleSystem :: drawWinner()
{
    cout << "Drawing winnner...\n";
    cout << "The winnner is: " << raffle.drawWinner() << endl;
}

// Method to print all participants
void RaffleSystem::printParticipant() const
{
    raffle.printParticipant();
}

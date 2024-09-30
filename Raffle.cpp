#include "Raffle.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Constructor
Raffle::Raffle() : participantCount(0)
 {
    participants = new Participant* [MAX_PARTICIPANTS];
    srand(time(0));
}

// Destructor
Raffle::~Raffle()
{
    for (int i=0; i < participantCount; i++)
    {
        delete participants[i];
    }
    delete[] participants;
}

// Method to add a participant
void Raffle::addParticipant(Participant* participant) 
{
    if (participantCount < MAX_PARTICIPANTS) 
    {
        participants[participantCount++] = participant;
    } 
    else 
    {
        cout << "Raffle is full. Cannot add more participants." << endl;
    }
}

// Method to draw a winner
string Raffle::drawWinner() {
    if (participantCount == 0) {
        return "No participants in the raffle.";
    }
    int winnerIndex = rand() % participantCount;
    return participants[winnerIndex]->getFirstName();
}

// Method it print all participants
void Raffle::printParticipant() const
{
    for (int i=0; i<participantCount; i++)
    {
        participants[i]->printParticipant();
        cout << "-----------------------" << endl;
    }
}
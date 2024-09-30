#ifndef RAFFLE_H
#define RAFFLE_H

#include "Participant.h"

class Raffle {
public:
    Raffle();
    ~Raffle();
    void addParticipant(Participant* participant);
    string drawWinner();
    void printParticipant() const;

private:
    static const int MAX_PARTICIPANTS = 18;
    Participant** participants;
    int participantCount;
};

#endif
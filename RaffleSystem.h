#ifndef RAFFLESYSTEM_H
#define RAFFLESYSTEM_H

#include "Raffle.h"
#include <fstream>
#include <limits>

class RaffleSystem 
{
    public:
        RaffleSystem();
        void loadParticipants();
        void addParticipant();
        void drawWinner();
        void printParticipant() const;

    private:
        Raffle raffle;
};

#endif
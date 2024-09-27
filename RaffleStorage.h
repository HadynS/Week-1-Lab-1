//header file for storage
#ifndef RAFFLESTORAGE_H
#define RAFFLESTORAGE_H

#include <iostream>
#include <string>
#include <fstream>

//forward declaration
class People;
class PersonalInfo; 

class RaffleTicket 
{
private:

    int ticketID;
    People* participantName;
    PersonalInfo* participantInfo;

public:

    static RaffleTicket** tickets;
    static int ticketCount; 
    static int capacity;

    //Constructor 
    RaffleTicket(int id, People* name, PersonalInfo* info); 

    //Destructor
    ~RaffleTicket();

    //Accessor methods
    int getTicketID();
    People* getParticipantName();
    PersonalInfo* getParticipantInfo();
    void printTicketDetails(); //prints tickets
    void addTicket(RaffleTicket* ticket);//add tickets
    void loadFromFile(string& filename); // loads all tickets from txt file
    




};

#endif
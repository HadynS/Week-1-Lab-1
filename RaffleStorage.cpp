//Storage Class
// Will handle array of pointers to RaffleEntry objects
//Read in names from txt files
//method to print names to the screen
//destructor to free memory from pointers

#include "RaffleStorage.h"
#include "People.h"
#include "RaffleEntry.h"

RaffleTicket** RaffleTicket::tickets = nullptr;
int RaffleTicket::ticketCount;
int RaffleTicket::capacity;

//Constructor
RaffleTicket::RaffleTicket(int id, People* name, PersonalInfo* info)
    : ticketID(id), participantName(name),participantInfo(info) {}

RaffleTicket::~RaffleTicket()
{
    delete participantName;
    delete participantInfo;
}

int RaffleTicket::getTicketID()
{
    return ticketID;
}

People* RaffleTicket::getParticipantName()
{
    return participantName;
}

PersonalInfo* RaffleTicket::getParticipantInfo() 
{
    return participantInfo;
}

void RaffleTicket::printTicketDetails() {
    cout << "----- Raffle Ticket Details -----" << endl;
    cout << "Ticket ID: " << ticketID << endl;
    //cout << "Participant Name: " << participantName->getName() << endl; //-from people file
    //cout << "Participant Address: " << participantInfo->getAddress() << endl; //-from entry file
    //cout << "Participant Phone Number: " << participantInfo->getNumber() << endl;  //-from entry file
    cout << "---------------------------------" << endl;
}

void RaffleTicket::addTicket(RaffleTicket* ticket)
{
    //code for adding ticket
}

void RaffleTicket::loadFromFile(string& filename)
{
    //code for loading from txt file
}


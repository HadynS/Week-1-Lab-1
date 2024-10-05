#include "RaffleSystem.h"
#include <iostream>

using namespace std;

int main() 
{
    RaffleSystem raffleSystem;
    int choice;

    // Function to load in participants from txt file
    raffleSystem.loadParticipants();

    // Menu to run program functions
    do 
    {
        cout << "\nMenu :\n";
        cout << "1. Add a participant (up to 3)\n";
        cout << "2. Draw a winner\n";
        cout << "3. Print all participants\n";
        cout << "4. End Program\n";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
                raffleSystem.addParticipant();
                break;
            case 2:
                raffleSystem.drawWinner();
                break;
            case 3:
                raffleSystem.printParticipant();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                if (cin.fail()) 
                {
                    cout << "\nYou entered something other than a number \n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }    
                else 
                {
                    cout << "Invalid choice. Please try again.\n";
                }
                
        }
    } while (choice != 4);
    return 0;
}
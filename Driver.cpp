// main driver

#include "RaffleStorage.h"
#include<iostream>
#include <string>

using namespace std;

int main ()
{   
    //variables
    int selection;

    //do while for switch menu
    do
    {
       cout << " \n\n Welcome to the '99 Camry Raffle Generator! " << endl; 
       cout << " Please make a selection: " << endl;
       cout << "1. Make New Entry " << endl;
       cout << "2. View All Entires " << endl;
       cout << "3. Delete Entry " << endl;
       cout << "4. Choose Winner " << endl;
       cout << "5. End Program \n" << endl; 
       cout << "Enter your Selection:  ";
       cin >> selection; 
       cout << endl;

       //switch menu
       switch (selection)
       {
        case '1':
            //entry function from RaffleEntry to enter new names to the text file
            break;
        case '2':
            //Print a list of all participants from Raffle storage
            break;
        case '3':
            //delete a specific entry from RaffleStorage
            break; 
        case '4':
            // Use randomizer function to choose a winner
            break;
        default:
            cout << "\nInvalid choice, please make a choice from the menu" << endl;
       }
    //end if 5 is selcted
    } while (selection != 5);
    //Goodbye message
    cout << "\n\n Thanks for playing! \n\n"; 
}

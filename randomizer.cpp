// other class
//must have pointer to rafflestorage object 
//must have constructor and destructor to manage pointer



#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    vector<string> names;
    string filename = "names.txt";
    ifstream file(filename);
    string name;

    // Check if the file opens successfully
    if (!file) 
    {
        cout << "Error opening file: " << filename << endl;
        return 1;
    }

    // Read names from the file and store them in the vector
    while (getline(file, name)) 
    {
        if (!name.empty()) 
        {
            names.push_back(name);
        }
    }

    file.close();

    // Seed the random number generator
    srand(time(0));

    // Select a random index from the vector
    int winnerIndex = rand() % names.size();

    // Print the winner
    cout << "The winner of the raffle is: " << names[winnerIndex] << "!" << endl;

    return 0;
}
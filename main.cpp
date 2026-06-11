#include "main.h"

//global amount of rooms, hotels do not generally increase their size so this can be set globally
int numR = 16;
int* rooms = new int[numR];


void RoomA()
{
    rooms[0] = 1;
    rooms[5] = 1;
    rooms[9] = 1;


    for(int i = 0; i < numR; i++)
    {
        cout << "Room #" << i+1 << " Status: ";

        if(rooms[i] == 1)
        {
            cout << "Occupied\n";
        }
        else
        {
            cout << "Empty\n";
        }
        //this should show if the array is occupied or not
    }

}

int main() 
{
    int choice = 0;
	cout << "Select From The Options Below...\n\n1. View Room Availability\n2. Make A Reservation\n3. Look Up Or Modify Reservation\n4. Quit\n\n";
    cin >> choice;

    if(choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << "\nPlease Choose from the corresponding choices.";
        cout << "Select From The Options Below...\n\n1. View Room Availability\n2. Make A Reservation\n3. Look Up Or Modify Reservation\n4. Quit\n\n";
        cin >> choice;
    }
    //RoomA();
	delete rooms;
	return 0;
}

#include "main.h"

//global amount of rooms, hotels do not generally increase their size so this can be set globally
int numR = 16;
int* rooms = new int[numR];


void RoomA()
{
	//populate room numbers
	for(int i = 0; i < numR; i++)
	{
		rooms[i] = i+1;
		
	}
	cout << rooms[15];
}












int main() 
{

	//cout << "Select From The Options Below...\n\n1. View Room Availability\n2. Make A Reservation\n3. Look Up Or Modify Reservation\n4. Quit\n";
	RoomA();
	delete rooms;
	return 0;
}
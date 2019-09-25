#include <iostream>
#include <time.h>
using namespace std;

	/* THIS WAS USED TO TEST THE RANDOMNESS OF THE RAND FUNCTION

	IN A TEST WITH 6000 NUMBERS, OUTPUTS WERE: 962 1010 1015 942 1002 1069

	int numbers [6] = { };

	for (int i = 0; i < 6; i++) 
	{
		numbers[i] = rollDice();
	}


	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	for (int f = 0; f < 6; f++) 
	{
		switch(numbers[f]) {
			case 1: one++;
					break;

			case 2: two++;
					break;

			case 3: three++;
					break;

			case 4: four++;
					break;

			case 5: five++;
					break;

			case 6: six++;
					break;
		}
	}
	*/

int rollDice()
{
	int x = rand() % 6 + 1;
	return x;
}

void playGame()
{
	// initialize the random number generator
	srand(time(NULL));

	int diceRolled = rollDice();
	int playerPick = 0;
	cout << "This is the dice game!\n" << endl;
	while (playerPick < 1 || playerPick > 6) 
	{
		cout << "Pick a number you think the 6-sided dice will roll: ";
		cin >> playerPick;
	}

	cout << "Dice rolls number " << diceRolled << endl;
	cout << "You picked a " << playerPick << endl;
}

bool playConfirm() 
{
	bool x;
	char playerSays = ' ';
	while (playerSays != 'y' || playerSays != 'n')
	{
		cout << "Do you want to keep playing? y/n ";
		cin >> playerSays;

		if (playerSays == 'y') 
		{
			x = true;
			break;
		} 
		if (playerSays == 'n') 
		{
			x = false;
			break;
		}
	}

	return x;
}

int main()
{
	bool keepPlaying = true;
	while (keepPlaying)
	{
		playGame();
		keepPlaying = playConfirm();
	}
	
	return 0;
}
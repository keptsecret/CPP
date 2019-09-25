#include <iostream>
#include <time.h>

int main() {

	// begin game
	std::cout << "Welcome! We're gonna play some rock-paper-scissors!\n";

	char confirm = ' ';

	while (confirm != 'y' || confirm != 'n') {
		std::cout << "Would you like to start? y/n" << std::endl;
		std::cin >> confirm;

		if (confirm == 'n') {
		std::cout << "Oh okay, see you next time!" << std::endl;
		return 0;
	}
	if (confirm == 'y') {
		std::cout << "Let's do this then!" << std::endl;
		break;
	}
	}

	std::cout << "Okay, let's begin!\n";

	// start playing
	while (confirm == 'y') {
			std::cout << "What would you like to play this round? r/p/s" << std::endl;

		// set player's move
		char player_move_char = ' ';
		int player_move = 0;

		while (player_move_char != 'r' || player_move_char != 'p' || player_move_char != 's') {
			std::cout << "Please pick a move to make:\n";
			std::cout << "\'r\' for rock, \'p\' for paper and \'s\' for scissors\n" << std::endl;
			std::cin >> player_move_char;

			if (player_move_char == 'r' || player_move_char == 'p' || player_move_char == 's') {
				break;
			}
		}

		if (player_move_char == 'r') {
			player_move = 1;
		}
		if (player_move_char == 'p') {
			player_move = 2;
		}
		if (player_move_char == 's') {
			player_move = 3;
		}

		// set the move made by the cp
		srand(time(NULL));
		float cp_move_number = rand() % 4; // produces a number between 0 and 3
		int cp_move = 0;

		if (cp_move_number < 1) {
			cp_move = 1;
		}
		if (cp_move_number < 2 && cp_move_number >= 1) {
			cp_move = 2;
		}
		if (cp_move_number <= 3 && cp_move_number >= 2) {
			cp_move = 3;
		}

		//for debugging
		std::cout << cp_move_number << std::endl;
		std::cout << cp_move << std::endl;

		// compare player and cp moves
		switch(player_move) {
			case 1 :
				if (cp_move == player_move) std::cout << "You played the same move as the CP!\n";	
				if (cp_move == 2) std::cout << "Aw shame! CP played paper and won this round...\n";
				if (cp_move == 3) std::cout << "YAY! You won!\n";
				break;
			case 2 :
				if (cp_move == player_move) std::cout << "You played the same move as the CP!\n";	
				if (cp_move == 3) std::cout << "Aw shame! CP played scissors and won this round...\n";
				if (cp_move == 1) std::cout << "YAY! You won! PAPER\n";
				break;
			case 3 :
				if (cp_move == player_move) std::cout << "TIED! You played the same move as the CP.\n";
				if (cp_move == 1) std::cout << "AW SHAME! CP played rock and won this round...\n";
				if (cp_move == 2) std::cout << "YAY! You won!\n";
				break;
		}

		while (confirm != 'y' || confirm != 'n') {
			std::cout << "Play again? y/n" << std::endl;
			std::cin >> confirm;

			if (confirm == 'n') {
				std::cout << "Oh okay, that was fun! See you next time!" << std::endl;
				return 0;
			}
			if (confirm == 'y') {
				std::cout << "Let's do this then!\n" << std::endl;
			break;
			}
		}
	}
	
	std::cout << "That was fun! See you next time" << std::endl;
	return 0;
}

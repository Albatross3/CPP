#include <iostream>
using namespace std;



class Player {
public:
	Player();
	virtual int getGuess();
	void play(Player& player1, Player& player2);
	bool checkForWin(int guess, int answer);
};

class HumanPlayer : public Player {
public:
	HumanPlayer();
	int getGuess();
};
class ComputerPlayer : public Player {
public:
	ComputerPlayer();
	int getGuess();

};

int main()
{
	Player game;
	HumanPlayer human1, human2;
	ComputerPlayer computer1, computer2;
	HumanPlayer human;
	ComputerPlayer computer;

	//game.play(computer1, computer2);
	//game.play(human1, human2);
	game.play(human, computer);
}
bool Player::checkForWin(int guess, int answer)
{
	if (answer == guess)
	{
		cout << "You're right! You win!" << endl;
		return true;
	}
	else if (answer < guess)
		cout << "Your guess is too high." << endl;
	else
		cout << "Your guess is too low." << endl;
	return false;
}


Player::Player() {}

int Player::getGuess()
{
	return 0;
}

void Player::play(Player& player1, Player& player2)
{
	int answer = 0, guess = 0;
	answer = rand() % 100;
	bool win = false;
	while (!win)
	{
		cout << "Player 1's turn to guess." << endl;
		guess = player1.getGuess();
		win = checkForWin(guess, answer);
		if (win) return;
		cout << "Player 2's turn to guess." << endl;
		guess = player2.getGuess();
		win = checkForWin(guess, answer);
	}
}

HumanPlayer::HumanPlayer()  {}

int HumanPlayer::getGuess()
{	
	int humanGuess;
	cin >> humanGuess;
	return humanGuess;

}

ComputerPlayer::ComputerPlayer() {}

int ComputerPlayer::getGuess()
{	
	int comGuess = rand() % 101;
	cout << comGuess << endl;
	return comGuess;
}

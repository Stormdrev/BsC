
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskPlayAgain();

//entry point
int main()
{
	do{
	PrintIntro();
	PlayGame();
	} 
	while (AskPlayAgain() == 1);
	return 0;
}

void PrintIntro()
{
	// introduse the game
	constexpr int WORLD_LEGTH = 9;
	std::cout << "Welcome to Bulls And Cows, a fun word game.\n";
	std::cout << "Guess " << WORLD_LEGTH;
	std::cout << " letter isogram i'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	constexpr int Turns = 5;
	for (int i = 0; i < Turns; i++)
	{
		std::string Guess = GetGuess();
		//print guess back
		std::cout << "You guess was:" << Guess << std::endl;
		std::cout << std::endl;
	}
}


std::string GetGuess() 
{
		// get a guess
		std::cout << "Enter you Guess: ";
		std::string Guess = "";
		std::getline(std::cin, Guess);
		return Guess;
}

bool AskPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Respons = "";
	std::getline(std::cin, Respons);
	return (Respons[0] == 'y') || (Respons[0] == 'Y');
}

#pragma once
#include <string>

class FBullCowGame 
{
public:
	FBullCowGame(); //constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	bool ChekGuessValidity(std::string);
	void Reset();

private:
	//see constructor to initialisation
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};
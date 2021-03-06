#include "pch.h"
#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() {Reset();} 

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	int MyMaxTries = MAX_TRIES;

	int MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::ChekGuessValidity(std::string)
{
	return false;
}

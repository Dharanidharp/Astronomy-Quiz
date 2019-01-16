#pragma once
#include <string>

class Levels 
{
public:
	void LevelOneQuestions();
	void LevelTwoQuestions();
	void LevelThreeQuestions();

	// Reset all the variables to default values at the start of tha game
	void Reset();

	// Create declarations of intro functions
	void Intro();
	void Instructions();
	void GraphicIntro();
	void QuoteDisp();

	// Create declaration of userchoice funciton
	std::string UserChoice();

};
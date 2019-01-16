#pragma once
#include <string>

class LevelThree
{
public:

	void C1();
	void C2();
	void C3();
	void C4();
	void C5();

	void LTHQ1();
	void LTHQ2();
	void LTHQ3();
	void LTHQ4();
	void LTHQ5();
	void GameOver();
	void DisplayAnswers();

	// Create declaration of playagain funciton
	std::string PlayAgain();

	// Create variables for level completion
	bool isLevelThreeComplete = false;

	// Variable for playAgain
	std::string playAgainChoice;

private:
	std::string QC1Answer = "Cassiopeia";
	std::string QC1AnswerAlt = "cassiopeia";

	std::string QC2Answer = "Cepheus";
	std::string QC2AnswerAlt = "cepheus";

	std::string QC3Answer = "Ursa minor";
	std::string QC3AnswerAlt = "ursa minor";

	std::string QC4Answer = "Cygnus";
	std::string QC4AnswerAlt = "cygnus";

	std::string QC5Answer = "Orion";
	std::string QC5AnswerAlt = "orion";
};

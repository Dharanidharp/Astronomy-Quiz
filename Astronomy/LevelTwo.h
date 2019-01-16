#pragma once
#include <string>

class LevelTwo
{
public:
	void LTQ1();
	void LTQ2();
	void LTQ3();
	void LTQ4();
	void LTQ5();
	void GameOver();
	void CommenceLevelThree();
	void DisplayAnswers();

	// Create variables for level completion
	bool isLevelTwoComplete = false;

private:
	std::string correctAnswer1 = "Pleiades";
	std::string correctAnswer1Alt = "pleiades";

	std::string correctAnswer2 = "Orion";
	std::string correctAnswer2Alt = "orion";

	std::string correctAnswer3 = "Beehive";
	std::string correctAnswer3Alt = "beehive";

	std::string correctAnswer4 = "M31";
	std::string correctAnswer4Alt = "m31";

	std::string correctAnswer5 = "M64";
	std::string correctAnswer5Alt = "m64";
};
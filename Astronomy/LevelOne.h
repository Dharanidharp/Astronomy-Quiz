#pragma once
#include <string>

class LevelOne 
{
public:
	void LOQ1();
	void LOQ2();
	void LOQ3();
	void LOQ4();
	void LOQ5();
	void GameOver();
	void CommenceLevelTwo();
	void DisplayAnswers();

	// Create variables for level completion
	bool isLevelOneComplete = false;

	// Variables for question completion
	bool q1Complete = false;
	bool q2Complete = false;
	bool q3Complete = false;
	bool q4Complete = false;
	bool q5Complete = false;

private:
	std::string correctAnswer1 = "Io Europa Ganymede Callisto";
	std::string correctAnswer1Alt = "io europa ganymede callisto";
	
	std::string correctAnswer2 = "Venus";
	std::string correctAnswer2Alt = "venus";
	
	std::string correctAnswer3 = "93 million miles";
	std::string correctAnswer3Alt = "150 million kilometers";
	
	std::string correctAnswer4 = "Milkyway";
	std::string correctAnswer4Alt = "milkyway";
	
	std::string correctAnswer5 = "Titan";
	std::string correctAnswer5Alt = "titan";
};
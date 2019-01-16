// Libraries
#include <iostream>
#include "Levels.h"
#include "LevelOne.h"
#include "PlayerStats.h"

// Instantiate Levels class
Levels levelsHeader;

// user choice y/n variable
std::string tryChoice;

// Question 1

void LevelOne::LOQ1()
{
	// Local variable to store player answer
	std::string playerAnswer1;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display Question 1
	std::cout << "Question 1 - Name the four Galilean moons of Jupiter" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player's answer and store it
	std::getline(std::cin, playerAnswer1);
	std::cout << std::endl;

	// Compare player answer and the correct answer
	if (playerAnswer1 == correctAnswer1 || playerAnswer1 == correctAnswer1Alt && playerLives > 0)
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 2 !" << std::endl;

		// Add 1 to player's score
		score1 += 1;

		// Ask next question
		LOQ2();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoice);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives > 0)
		{
			LOQ1();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoice[0] == 'N' || tryChoice[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LOQ2();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question 2

void LevelOne::LOQ2()
{
	// Local variable to store player answer
	std::string playerAnswer2;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display Question 2
	std::cout << "Question 2 - Name the hottest planet in our solar system" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player's answer and store it
	std::getline(std::cin, playerAnswer2);
	std::cout << std::endl;

	// Compare player answer and the correct answer
	if (playerAnswer2 == correctAnswer2 || playerAnswer2 == correctAnswer2Alt && playerLives > 0)
	{

		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 3 !" << std::endl;

		// Add 1 to player's score
		score1 += 1;

		// Ask next question
		LOQ3();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoice);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives > 0)
		{
			LOQ2();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoice[0] == 'N' || tryChoice[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LOQ3();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question 3

void LevelOne::LOQ3()
{
	// Local variable to store player answer
	std::string playerAnswer3;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display Question 3
	std::cout << "Question 3 - One Astronomical Unit (AU) is equal to (type in kilometers/miles)" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player's answer and store it
	std::getline(std::cin, playerAnswer3);
	std::cout << std::endl;

	// Compare player answer and the correct answer
	if (playerAnswer3 == correctAnswer3 || playerAnswer3 == correctAnswer3Alt && playerLives > 0)
	{

		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 4 !" << std::endl;

		// Add 1 to player's score
		score1 += 1;

		// Ask next question
		LOQ4();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoice);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives > 0)
		{
			LOQ3();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoice[0] == 'N' || tryChoice[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LOQ4();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question 4

void LevelOne::LOQ4()
{
	// Local variable to store player answer
	std::string playerAnswer4;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display Question 4
	std::cout << "Question 4 - What is the name of our galaxy ? " << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your answer: ";


	// Get player's answer and store it
	std::getline(std::cin, playerAnswer4);
	std::cout << std::endl;

	// Compare player answer and the correct answer
	if (playerAnswer4 == correctAnswer4 || playerAnswer4 == correctAnswer4Alt && playerLives > 0)
	{

		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 5 !" << std::endl;

		// Add 1 to player's score
		score1 += 1;

		// Ask next question
		LOQ5();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoice);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives > 0)
		{
			LOQ4();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoice[0] == 'N' || tryChoice[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LOQ5();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question 5

void LevelOne::LOQ5()
{
	// Local variable to store player answer
	std::string playerAnswer5;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display Question 4
	std::cout << "Question 5 - What is the name of Saturn's largest moon ? " << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player's answer and store it
	std::getline(std::cin, playerAnswer5);
	std::cout << std::endl;

	// Compare player answer and the correct answer
	if (playerAnswer5 == correctAnswer5 || playerAnswer5 == correctAnswer5Alt && playerLives > 0)
	{

		// Display success text
		std::cout << "Correct Answer !" << std::endl;

		// Add 1 to player's score
		score1 += 1;

		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
		std::cout << "                   ----------          ----------" << std::endl;

		// Toggle isLevelOneComplete to true
		isLevelOneComplete = true;

		// Display Answers
		DisplayAnswers();

		// Commence level 2
		CommenceLevelTwo();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure Text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoice);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives > 0)
		{
			LOQ5();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoice[0] == 'Y' || tryChoice[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoice[0] == 'N' || tryChoice[0] == 'n')
		{
			GameOver();
		}
	}
}

// Commence level 2
void LevelOne::CommenceLevelTwo()
{
	// Compare player health and level one completion
	if (playerLives > 0 && isLevelOneComplete == true)
	{
		levelsHeader.LevelTwoQuestions();
	}
	else
	{
		return;
	}
}

// Display Level 1 answers after level completes
void LevelOne::DisplayAnswers()
{
	if (isLevelOneComplete == true) 
	{
		std::cout << "============================================" << std::endl;
		std::cout << "The answers to the questions are: " << std::endl;
		std::cout << "Question 1 - Name the four Galilean moons of Jupiter: " << correctAnswer1 << std::endl;
		std::cout << "Question 2 - Name the hottest planet in our solar system: " << correctAnswer2 << std::endl;
		std::cout << "Question 3 - One Astronomical Unit (AU) is equal to (type in kilometers/miles): " << correctAnswer3 << " or " << correctAnswer3Alt <<std::endl;
		std::cout << "Question 4 - What is the name of our galaxy ?: " << correctAnswer4 << std::endl;
		std::cout << "Question 5 - What is the name of Saturn's largest moon ?: " << correctAnswer5 << std::endl;
		std::cout << "============================================" << std::endl;
	}
}

// End Game

void LevelOne::GameOver()
{
	// When player health is zero or below zero
	if (playerLives <= 0)
	{
		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
		std::cout << "                   ----------          ----------" << std::endl;

		// Display game over text
		std::cout << "                          (  GAMEOVER  )" << std::endl;
		std::cout << std::endl;

		// Display sad graphic
		std::cout << "                           |||      |||" << std::endl;
		std::cout << std::endl;
		std::cout << "                             ||||||||" << std::endl;
		std::cout << "                           ||        || " << std::endl;
		std::cout << std::endl;

		// Display mock text
		std::cout << "Try again after increasing your knowledge ! :)" << std::endl;
		std::cout << std::endl;

		// Display Farewell
		std::cout << "Thank you for playing" << std::endl;
		std::cout << std::endl;

	}

	// When player health is above zero and the quiz is finished
	else if (playerLives > 0)
	{
		// Display success text
		std::cout << "Congratulations ! You have completed the quiz" << std::endl;
		std::cout << std::endl;
		
		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score1 << std::endl;
		std::cout << "                   ----------          ----------" << std::endl;

		// Display smile graphic
		std::cout << std::endl;
		std::cout << "                           |||      |||" << std::endl;
		std::cout << std::endl;
		std::cout << "                           ||        || " << std::endl;
		std::cout << "                             ||||||||" << std::endl;
		std::cout << std::endl;

		// Display Farewell
		std::cout << "Thank you for playing" << std::endl;
		std::cout << std::endl;
	}
}

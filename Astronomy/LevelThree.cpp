// Libraries
#include <iostream>
#include "string"
#include "LevelThree.h"
#include "Levels.h"
#include "PlayerStats.h"

// Instantiate a new levels class
Levels levelsConstellations;

// User choice y/n variable
std::string tryChoiceConstellations;

// Display Constellation graphics
void LevelThree::C1()
{
	std::cout << std::endl;
	std::cout << "                                           *                                                         " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                  *                                                  " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                         *                                                           " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                            *                                                        " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                         *                                                           " << std::endl;
	std::cout << std::endl;
}

void LevelThree::C2()
{
	std::cout << std::endl;
	std::cout << "                                      *                *                                             " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                    *                    *                                           " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                *                                                    " << std::endl;
	std::cout << std::endl;
}

void LevelThree::C3()
{
	std::cout << std::endl;
	std::cout << "                      *         *                                                                    " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                      *          *                                                                   " << std::endl;
	std::cout << "                                         *                                                           " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                 *                                                   " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                       *                                             " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << std::endl;
}

void LevelThree::C4()
{
	std::cout << std::endl;
	std::cout << "                                            *                                                        " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                    *                       |                        *                               " << std::endl;
	std::cout << "                                            *                                                        " << std::endl;
	std::cout << "                             *              |                                                        " << std::endl;
	std::cout << "                                            |           *                                            " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                                            |                                                        " << std::endl;
	std::cout << "                                            *                                                        " << std::endl;
	std::cout << std::endl;
}

void LevelThree::C5()
{
	std::cout << std::endl;
	std::cout << "                               *      *                                                              " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                     *                                                               " << std::endl;
	std::cout << "                                  *                               *                                  " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                     *              *                  *                             " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                         *                 *------------*                            " << std::endl;
	std::cout << "                                                                        *                            " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                           *                                         " << std::endl;
	std::cout << "                                                                       *                             " << std::endl;
	std::cout << "                                                      *              *                               " << std::endl;
	std::cout << "                                                    *                                                " << std::endl;
	std::cout << "                                                  *                                                  " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                                  *                                  " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "                                                   *                                                 " << std::endl;
	std::cout << std::endl;
}

// Ask Questions
void LevelThree::LTHQ1()
{
	// Local variable to store player answer
	std::string playerAnswer1;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display question 1
	std::cout << "A 10 letter constellation that starts with the letter 'C' and ends with the letter 'A' ?" << std::endl;
	
	// Run C1
	C1();

	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player answer and store it 
	std::getline(std::cin, playerAnswer1);
	std::cout << std::endl;

	// Compare player answer with correct answer
	if (playerAnswer1 == QC1Answer || playerAnswer1 == QC1AnswerAlt) 
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 2 !" << std::endl;

		// Add 1 to player's score
		score3 += 1;

		// Ask next question
		LTHQ2();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoiceConstellations);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives > 0)
		{
			LTHQ1();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoiceConstellations[0] == 'N' || tryChoiceConstellations[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LTHQ2();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

void LevelThree::LTHQ2()
{
	// Local variable to store player answer
	std::string playerAnswer2;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display question 2
	std::cout << "A 7 letter constellation that starts with the letter 'C' and ends with the letter 'S' ?" << std::endl;

	// Run C2
	C2();

	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player answer and store it 
	std::getline(std::cin, playerAnswer2);
	std::cout << std::endl;

	// Compare player answer with correct answer
	if (playerAnswer2 == QC2Answer || playerAnswer2 == QC2AnswerAlt)
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 3 !" << std::endl;

		// Add 1 to player's score
		score3 += 1;

		// Ask next question
		LTHQ3();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoiceConstellations);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives > 0)
		{
			LTHQ2();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoiceConstellations[0] == 'N' || tryChoiceConstellations[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LTHQ3();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

void LevelThree::LTHQ3()
{
	// Local variable to store player answer
	std::string playerAnswer3;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display question 3
	std::cout << "An 9 letter constellation that starts with the letter 'U' and ends with the letter 'R' ?" << std::endl;

	// Run C3
	C3();

	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player answer and store it 
	std::getline(std::cin, playerAnswer3);
	std::cout << std::endl;

	// Compare player answer with correct answer
	if (playerAnswer3 == QC3Answer || playerAnswer3 == QC3AnswerAlt)
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 4 !" << std::endl;

		// Add 1 to player's score
		score3 += 1;

		// Ask next question
		LTHQ4();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoiceConstellations);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives > 0)
		{
			LTHQ3();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoiceConstellations[0] == 'N' || tryChoiceConstellations[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LTHQ4();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

void LevelThree::LTHQ4()
{
	// Local variable to store player answer
	std::string playerAnswer4;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display question 4
	std::cout << "An 6 letter constellation that starts with the letter 'C' and ends with the letter 'S' ?" << std::endl;

	// Run C4
	C4();

	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player answer and store it 
	std::getline(std::cin, playerAnswer4);
	std::cout << std::endl;

	// Compare player answer with correct answer
	if (playerAnswer4 == QC4Answer || playerAnswer4 == QC4AnswerAlt)
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;
		std::cout << "Proceed to Question 5 !" << std::endl;

		// Add 1 to player's score
		score3 += 1;

		// Ask next question
		LTHQ5();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoiceConstellations);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives > 0)
		{
			LTHQ4();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoiceConstellations[0] == 'N' || tryChoiceConstellations[0] == 'n')
		{

			// When player health is above zero and when player wants to skip the current question
			if (playerLives > 0)
			{
				LTHQ5();
			}

			// When player health is less than or equal to zero and when player wants to skip the current question
			else
			{
				GameOver();
			}
		}
	}
}

void LevelThree::LTHQ5()
{
	// Local variable to store player answer
	std::string playerAnswer5;

	// Display player's health and player's score
	std::cout << "                   ----------          ----------" << std::endl;
	std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
	std::cout << "                   ----------          ----------" << std::endl;

	// Display question 5
	std::cout << "A 5 letter constellation that starts with the letter 'O' and ends with the letter 'N' ?" << std::endl;

	// Run C5
	C5();

	std::cout << std::endl;
	std::cout << "Enter your answer: ";

	// Get player answer and store it 
	std::getline(std::cin, playerAnswer5);
	std::cout << std::endl;

	// Compare player answer with correct answer
	if (playerAnswer5 == QC5Answer || playerAnswer5 == QC5AnswerAlt)
	{
		// Display success text
		std::cout << "Correct Answer !" << std::endl;
		std::cout << std::endl;

		// Add 1 to player's score
		score3 += 1;

		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
		std::cout << "                   ----------          ----------" << std::endl;
		
		// Toggle isLevelThreeComplete
		isLevelThreeComplete = true;

		// Display Answers
		DisplayAnswers();

		// Run Gameover
		GameOver();
	}

	// In the case of wrong answer
	else
	{
		// Reduce player health
		playerLives -= 1;

		// Display failure Text and try again text
		std::cout << "Oops wrong answer ! Try Again ? y/n : " << std::endl;

		// Get user choice
		std::getline(std::cin, tryChoiceConstellations);
		std::cout << std::endl;

		// Compare user choice y when player health is above zero
		if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives > 0)
		{
			LTHQ5();
		}

		// Compare user choice y when player health is less than or equal to zero
		else if (tryChoiceConstellations[0] == 'Y' || tryChoiceConstellations[0] == 'y' && playerLives <= 0)
		{
			GameOver();
		}

		// Compare user choice n
		else if (tryChoiceConstellations[0] == 'N' || tryChoiceConstellations[0] == 'n')
		{
			GameOver();
		}
	}
}

// Display Level 2 answers after level completes
void LevelThree::DisplayAnswers()
{
	if (isLevelThreeComplete == true)
	{
		std::cout << "============================================" << std::endl;
		std::cout << "The answers to the questions are: " << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		C1();
		std::cout << "The constellation is: " << QC1Answer << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		C2();
		std::cout << "The constellation is: " << QC2Answer << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		C3();
		std::cout << "The constellation is: " << QC3Answer << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		C4();
		std::cout << "The constellation is: " << QC4Answer << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		C5();
		std::cout << "The constellation is: " << QC5Answer << std::endl;
		std::cout << "============================================" << std::endl;
	}
}

// End Game

void LevelThree::GameOver()
{
	// When player health is zero or below zero
	if (playerLives <= 0)
	{
		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
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

		// Ask player to play again
		PlayAgain();
	}

	// When player health is above zero and the quiz is finished
	else if (playerLives > 0)
	{
		// Display success text
		std::cout << "Congratulations ! You have completed the quiz" << std::endl;
		std::cout << std::endl;

		// Display player's health and player's score
		std::cout << "                   ----------          ----------" << std::endl;
		std::cout << "                   Health: " << playerLives << "            Score: " << score3 << std::endl;
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

		// Ask player to play again
		PlayAgain();
	}
}

std::string LevelThree::PlayAgain()
{
	// Display play again text
	std::cout << "Want to play Again ? (y/n) : ";

	// Get user choice
	std::getline(std::cin, playAgainChoice);
	std::cout << std::endl;

	// Compare user choice y
	if (playAgainChoice[0] == 'Y' || playAgainChoice[0] == 'y')
	{
		levelsConstellations.Reset();
		levelsConstellations.GraphicIntro();
		levelsConstellations.QuoteDisp();
		levelsConstellations.Intro();
		levelsConstellations.UserChoice();
	}

	// Compare user choice n
	else if (playAgainChoice[0] == 'N' || playAgainChoice[0] == 'n')
	{
		// Display Farewell
		std::cout << "Thank you for playing" << std::endl;
		std::cout << std::endl;

		return playAgainChoice;
	}

	// Ask player to enter a valid letter Y/y/N/n
	else if (playAgainChoice[0] != 'Y' || playAgainChoice[0] != 'y' || playAgainChoice[0] != 'N' || playAgainChoice[0] != 'n')
	{
		std::cout << std::endl;
		std::cout << "Please enter a valid choice (Y/y/N/n)";
		std::cout << std::endl;

		// Run PlayAgain
		PlayAgain();
	}
	return playAgainChoice;
}


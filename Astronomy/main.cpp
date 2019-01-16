// Libraries
#include <iostream>
#include <string>
#include "Levels.h"
#include "LevelOne.h"
#include "LevelTwo.h"
#include "LevelThree.h"
#include "PlayerStats.h"

// Create references to the header files
LevelOne lOne;
LevelTwo lTwo;
LevelThree lThree;
Levels levelClass;

// variable for user choice y/n
std::string userChoice;

// Main Function
int main() 
{
	levelClass.Reset();
	levelClass.GraphicIntro();
	levelClass.QuoteDisp();
	levelClass.Intro();
	levelClass.UserChoice();
	return 0;
}


// Reset all the variables to default values at the start of each game
void Levels::Reset()
{
	score1 = 0;
	score2 = 0;
	score3 = 0;
	playerLives = 3;
}


// Display Intro Graphics
void Levels::GraphicIntro()
{
	std::cout << "            *                   *             *                   *             *              *    *     *        " << std::endl;
	std::cout << "     *            *                    *                   *                *        *     *           *    *      " << std::endl;
	std::cout << "          *        *            *         *       *               *       *            *            *              " << std::endl;
	std::cout << "      =       =======  ========   ======       ======      ===     ==    ======    ===      ==    ==        ==     " << std::endl;
	std::cout << "     ==      ==           ==      ========    ==    ==     == ==   ==   ==    ==   == == == ==     ==      ==      " << std::endl;
	std::cout << "    ====    =======       ==      == ===      ==    ==     ==  ==  ==   ==    ==   ==  ===  ==      ==    ==       " << std::endl;
	std::cout << "   ==  ==         ==      ==      ==   ===    ==    ==     ==   == ==   ==    ==   ==       ==         ==          " << std::endl;
	std::cout << "  ===  ===  ======        ==      ==    ==     ======      ==    ====    ======    ==       ==         ==          " << std::endl;
	std::cout << "    *   == ==  *          ==  *         ==  *          *   ==       *         *       *     ==     *   ==  *       " << std::endl;
	std::cout << "        == ==          *  ==         *  ==        *        ==   *      *         *          ==         ==     *    " << std::endl;
	std::cout << "   *    == ==             ==            ==    *        *   ==           *          *     *  ==   *     ==  *       " << std::endl;
	std::cout << "     *  == ==         *   == *     *    ==    *        *   ==  *        *          *     *  ==   *     ==  *       " << std::endl;
}

// Display Quote
void Levels::QuoteDisp()
{
	std::cout << "   *            *              *              *        *          *     *          *     *       *         *       " << std::endl;
	std::cout << "    *        *           *      THE WONDER IS, NOT THAT THE FIELD         *             *                 *        " << std::endl;
	std::cout << "      *           *                     OF STARS IS VAST        *      *             *          *            *     " << std::endl;
	std::cout << "        *    *          *         *         BUT THAT,       *                 *                         *          " << std::endl;
	std::cout << "       *          *             *      MAN HAS MEASURED IT               *             *            *          *   " << std::endl;
	std::cout << "       *        *              *              *        *          *     *          *     *       *         *       " << std::endl;
	std::cout << "    *                 *      *         *      *        *       *        *          *     *       *         *       " << std::endl;
	std::cout << std::endl;
}

// Display Welcome text
void Levels::Intro()
{
	std::cout << "Welcome to Astronomy Quiz" << std::endl;
	std::cout << std::endl;

	// Call instructions
	Instructions();
	return;
}

// Decide whether the game should start or not based on user choice
std::string Levels::UserChoice()
{
	// Display Instruction
	std::cout << "Are you ready to answer ?: y/n " << std::endl;
	std::cout << "If yes press 'y' to start or 'n' to quit: ";

	// Get user choice
	std::getline(std::cin, userChoice);
	std::cout << std::endl;

	// Compare user choice y
	if (userChoice[0] == 'Y' || userChoice[0] == 'y')
	{
		// Run level 1
		levelClass.LevelOneQuestions();
	}

	// Compare user choice n
	else if (userChoice[0] == 'N' || userChoice[0] == 'n')
	{
		// Quit game
		std::cout << "Sorry to see you go. Hope that you will play again" << std::endl;

		// Display sad graphic
		std::cout << std::endl;
		std::cout << "                           |||      |||" << std::endl;
		std::cout << std::endl;
		std::cout << "                             ||||||||" << std::endl;
		std::cout << "                           ||        || " << std::endl;
		std::cout << std::endl;

		return userChoice;
	}

	// Ask player to enter a valid letter to proceed
	else if (userChoice[0] != 'Y' || userChoice[0] != 'y' || userChoice[0] != 'N' || userChoice[0] != 'n')
	{
		std::cout << std::endl;
		std::cout << "Please enter a valid letter (Y/N/y/n) to proceed" << std::endl;
		std::cout << std::endl;

		// Run UserChoice again
		UserChoice();
	}
	return userChoice;
}

// Display game instructions
void Levels::Instructions()
{
	// Display Gameplay Introduction
	std::cout << "Instructions" << std::endl;
	std::cout << "Please type correct spellings. Capitalise the first letter of each word or type all the letters in lower case" << std::endl;
	std::cout << "Leave a blank after each word. Example: Mercury Venus Earth...." << std::endl;
	std::cout << std::endl;

	// Some more info on the game
	std::cout << "Correct answer to easy question adds 1 to the score" << std::endl;
	std::cout << "Correct answer to hard question adds 2 to the score" << std::endl;
	std::cout << "Incorrect answers reduce 1 health" << std::endl;
	std::cout << "There are 3 levels" << std::endl;
	std::cout << "So, Good luck and have fun pawning the computer or learning from the computer" << std::endl;
	std::cout << "Let the voyage begin..." << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
}

// Level 1
void Levels::LevelOneQuestions()
{
	// Display level 1 commencement
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Commencing Level 1..." << std::endl;
	//std::cout << "Total Score: " << totalScore << std::endl;

	// Call LOQ1 method from LevelOne header file and start the level 1
	lOne.LOQ1();
}

// Level 2
void Levels::LevelTwoQuestions()
{
	// Display level 2 commencement
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Commencing Level 2..." << std::endl;
	//std::cout << "Total Score: " << totalScore << std::endl;

	// Call LTQ1 method from LevelTwo header file and start the level 2
	lTwo.LTQ1();
}

// Level 3
void Levels::LevelThreeQuestions()
{
	// Display level 3 commencement
	std::cout << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << "Commencing Level 3..." << std::endl;
	//std::cout << "Total Score: " << totalScore << std::endl;

	// Call LTHQ1 method from LevelThree header file and start the level 3
	lThree.LTHQ1();
}

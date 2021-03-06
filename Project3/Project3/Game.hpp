/*********************************************************************
** Program name: Project 3 & 4 (Fantasy Combat Game)
** Author: Mario Franco-Munoz
** Date: 10/27/2017
** Description: Header file for Game class.
** Game class contains the primary functionalies of the fantasy combat game. Functionality includes:
** Battles between the different  characters of the game, user prompts, character info, results,
** and game loop.
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>


//class headers
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include "CharQueue.hpp"

//function headers
#include "Integer_Input_Val.hpp"

class Game {
private:
	std::vector<Character *> characters;
	int round;
	CharQueue team1;
	CharQueue team2;
	CharQueue grave;

public:
	Game();

	void introduction();
	void fight();
	void menu();
	void gameLoop();
	void tournament();
	void displayResults();

	virtual ~Game() {

	}
};


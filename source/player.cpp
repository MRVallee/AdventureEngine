/***********************************************************************
*
*  File: player.cpp
*
*  Description: This file contains the implementation for the higher
*				level functions in the player class.
*
*  Author: Michael Vallee
*
*  Last Modified: 8/14/2020
*
***********************************************************************/

#include "library.h"

using namespace std;

//this function generates the player character
void player::Generate() {

	//This populates the core stats with a number from 3 to 18.
	// This is a temporary code block.
	base_str = rand() % 16 + 3;
	base_con = rand() % 16 + 3;
	base_dex = rand() % 16 + 3;
	base_int = rand() % 16 + 3;
	base_wis = rand() % 16 + 3;
	base_cha = rand() % 16 + 3;
	str = base_str;
	con = base_con;
	dex = base_dex;
	int_ = base_int;
	wis = base_wis;
	cha = base_cha;

	//Assign health and mana to 10.
	// THis is a temporary code block.
	max_hp = 10;
	max_mp = 10;
	hp = max_hp;
	mp = max_mp;

}

//this function displays the character sheet
void player::Character() {

	printw("Health: %i\n", hp);
	printw("Mana: %i\n\n", mp);
	printw("Strength: %i\n", str);
	printw("Constitution: %i\n", con);
	printw("Dexterity: %i\n", dex);
	printw("Intelligence: %i\n", int_);
	printw("Wisdom: %i\n", wis);
	printw("Charisma: %i\n", cha);

	refresh();
	getch();

}

//this function checks ot see if the player is ready to level up
void player::XpCheck() {

	//This checks to see if the player has experiance equal to their current level times
	// 1000.  If they d, they lose that much experiance and level up.
	if (xp >= level * 1000) {
		xp -= (level * 1000);
		++level;
	}

}

//this function levels up the player
void player::LevelUp() {

}
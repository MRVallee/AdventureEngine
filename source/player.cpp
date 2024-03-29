/***********************************************************************
*
*  File: player.cpp
*
*  Description: This file contains the implementation for the higher
*				level functions in the player class.
*
*  Author: Michael Vallee
*
*  Last Modified: 5/26/2022
*
***********************************************************************/

//Standard Libraries
#include <iostream>
#include <string>
#include <vector>
//Additional Libraries
#include "curses.h"
//Header Files
#include "choice.h"
#include "encounter.h"
#include "item.h"
#include "player.h"
#include "window.h"

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

	erase();

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
	erase();

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

//this function attempts to equip an item to the player
void player::Equip(item x) {

	//for general equiping
	if ((x.GetSlot() > 1) && (x.GetSlot() < 10)) {
		SetEquip(x, x.GetSlot());
	}
	//for rings
	else if (x.GetSlot() == 10) {
		erase();
		printw("Equip on slot 1 or 2?\n");
		refresh();

	}
	//for one handed items
	else if (x.GetSlot() == 11) {
		erase();
		printw("Equip on slot 1 or 2?\n");
		refresh();

	}
	//for two handed items
	else if (x.GetSlot() == 12) {

	}

}

//this function calculates the player's current stats from items and buffs
void player::Calculate() {

}
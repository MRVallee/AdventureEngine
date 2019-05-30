/***********************************************************************
*
*  File: choice.h
*
*  Description: This file contains the player class which is used
*               to store all of the information about the player.
*
*  Author: Michael Vallee
*
*  Last Modified: 5/30/2019
*
***********************************************************************/

#ifndef PLAYER
#define PLAYER

#include "library.h"

class player {

public:

	//Return Functions:
	// these functions return the values of their respective private variables
	string GetName() { return name; }
	int GetLevel() { return level; }
	int GetXp() { return xp; }
	int GetMaxHp() { return max_hp; }
	int GetHp() { return hp; }
	int GetMaxMp() { return max_mp; }
	int GetMp() { return mp; }

private:

	string name;	//stores the name of the player

	int level;		//stores the level of the player
	int xp;			//stores the experience of the player

	int max_hp;		//stores the maximum health the player can have
	int hp;			//stores the player's current health
	int max_mp;		//stores the maximum magic points the player can have
	int mp;			//stores the player's current magic points

	int base_str;	//stroes the player's base strength
	int base_con;	//stores the player's base constitution
	int base_dex;	//stores the player's base dexterity
	int base_int;	//stores the player's base intelligence
	int base_wis;	//stores the player's base wisdom
	int base_cha;	//stores the player's base charisma

	int str;		//stores the player's current strength
	int con;		//stores the player's current constitution
	int dex;		//stores the player's current dexterity
	int int_;		//stores the player's current intelligence
	int wis;		//stores the playe's curent wisdom
	int cha;		//stores the player's current charisma

};

#endif
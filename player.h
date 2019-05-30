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

	//Get Functions:
	// these functions return the values of their respective private variables
	string GetName() { return name; }
	int GetLevel() { return level; }
	int GetXp() { return xp; }
	int GetMaxHp() { return max_hp; }
	int GetHp() { return hp; }
	int GetMaxMp() { return max_mp; }
	int GetMp() { return mp; }
	int GetBaseStr() { return base_str; }
	int GetBaseCon() { return base_con; }
	int GetBaseDex() { return base_dex; }
	int GetBaseInt() { return base_int; }
	int GetBaseWis() { return base_wis; }
	int GetBaseCha() { return base_cha; }
	int GetStr() { return str; }
	int GetCon() { return con; }
	int GetDex() { return dex; }
	int GetInt() { return int_; }
	int GetWis() { return wis; }
	int GetCha() { return cha; }

	//Set Functions:
	// these functions set the value of their respective private variables
	void SetName(string x) { name = x; }
	void SetLevel(int x) { level = x; }
	void SetXp(int x) { xp = x; }
	void SetMaxHp(int x) { max_hp = x; }
	void SetHp(int x) { hp = x; }
	void SetMaxMp(int x) { max_mp = x; }
	void SetMp(int x) { mp = x; }
	void SetBaseStr(int x) { base_str = x; }
	void SetBaseCon(int x) { base_con = x; }
	void SetBaseDex(int x) { base_dex = x; }
	void SetBaseInt(int x) { base_int = x; }
	void SetBaseWis(int x) { base_wis = x; }
	void SetBaseCha(int x) { base_cha = x; }
	void SetStr(int x) { str = x; }
	void SetCon(int x) { con = x; }
	void SetDex(int x) { dex = x; }
	void SetInt(int x) { int_ = x; }
	void SetWis(int x) { wis = x; }
	void SetCha(int x) { cha = x; }


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
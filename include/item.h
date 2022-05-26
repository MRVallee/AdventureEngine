/***********************************************************************
*
*  File: item.h
*
*  Description: This file contains the item class which is a generalized
*               class that can hold any item type.
*
*  Author: Michael Vallee
*
*  Last Modified: 5/26/2022
*
***********************************************************************/

#ifndef ITEM
#define ITEM

//Standard Libraries
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class item {

public:

	//Get Functions:
	// these functions return the values of their respective private variables
	std::string GetName() { return name; }
	std::string GetDesc() { return desc; }
	int GetConsume() { return consume; }
	int GetDuration() { return duration; }
	int GetSlot() { return slot; }
	int GetHp() { return hp; }
	int GetMp() { return mp; }
	int GetStr() { return str; }
	int GetCon() { return con; }
	int GetDex() { return dex; }
	int GetInt() { return int_; }
	int GetWis() { return wis; }
	int GetCha() { return cha; }

	//Set Functions:
	// these functions set the value of their respective private variables
	void SetName(int x) { name = x; }
	void SetDesc(int x) { desc = x; }
	void SetConsume(int x) { consume = x; }
	void SetDuration(int x) { duration = x; }
	void SetSlot(int x) { slot = x; }
	void SetHp(int x) { hp = x; }
	void SetMp(int x) { mp = x; }
	void SetStr(int x) { str = x; }
	void SetCon(int x) { con = x; }
	void SetDex(int x) { dex = x; }
	void SetInt(int x) { int_ = x; }
	void SetWis(int x) { wis = x; }
	void SetCha(int x) { cha = x; }


	//Default Constructor
	item() {
		name = "NO_NAME";
		desc = "NO_DESC";
		consume = false;
		duration = 0;
		slot = 0;
		hp = 0;
		mp = 0;
		str = 0;
		con = 0;
		dex = 0;
		int_ = 0;
		wis = 0;
		cha = 0;
	}

private:

	std::string name;           //stores the name of the item
	std::string desc;           //stores the description of the item

	bool consume;          //if true, the item can be consumed
	int duration;          //if the item is consumable this is the length of its effect

	int slot;			//determines what slot the item is equipped to
						// 0 - not equipabe
						// 1 - head
						// 2 - sholders
						// 3 - neck
						// 4 - body
						// 5 - wrists
						// 6 - hands
						// 7 - waist
						// 8 - legs
						// 9 - feet
						// 10 - finger
						// 11 - one handed
						// 12 - two handed

	//the following values are stat modifications caused by the item.
	// if the item is consumable the item causes a temporary stat change
	// equal to the values below for a duration defined above.

	int hp;			//mdulates the player's current hp
	int mp;			//mdulates the player's current mp
	int str;		//modulates the player's current strength
	int con;		//modulates the player's current constitution
	int dex;		//modulates the player's current dexterity
	int int_;		//modulates the player's current intelligence
	int wis;		//modulates the playe's curent wisdom
	int cha;		//modulates the player's current charisma

};

#endif
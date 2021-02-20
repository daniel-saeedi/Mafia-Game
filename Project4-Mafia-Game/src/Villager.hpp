#ifndef VILLAGER_H
#define VILLAGER_H
#include "Player.hpp"
#include<iostream>

constexpr char VILLAGER_ROLE[] = "villager";

class Villager : public Player
{
public:
	Villager(std::string _name);
	virtual std::string get_role(){return VILLAGER_ROLE;}
	virtual bool is_villager(){return true;}
	virtual void reset(){is_healed = false;}
	virtual std::string are_you_mafia(){return "No";}
};
#endif
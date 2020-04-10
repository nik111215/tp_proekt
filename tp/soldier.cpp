#include "soldier.hpp"
#include <iostream>

Soldier::Soldier(int number){
	switch(number){
	case 1:
		xp = 100;
		money = 1000;
		attack_power = 28;
		defence = 15;
		break;
	case 2: 
		xp = 90;
		money = 1100;
		attack_power = 30;
		defence = 18;
		break;	
	case 3:
		xp = 30;
		money = 500;
		attack_power = 45;
		defence = 25;
		break;
	case 4:
		xp = 80;
		money = 1200;
		attack_power = 33;
		defence = 12;
		break;
	}
}


int Soldier::receiv_xp() const {
	return xp;
}

int Soldier::receiv_money() const {
	return money;
}

int Soldier::receiv_attack_power() const {
	return attack_power;
}

int Soldier::receiv_defence() const{
	return defence;
}

void Soldier::up_xp(int money) {
	xp = xp + money / 10;
}


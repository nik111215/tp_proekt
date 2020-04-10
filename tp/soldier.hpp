#ifndef SOLDIER_HPP
#define SOLDIER_HPP
#define orc 1
#define goblin 2
#define elf 3
#define troll 4
class Soldier {
private:
	int xp;
	int money;
	int attack_power;
	int defence;
public:
	Soldier(int number);
	int receiv_xp() const;
	int receiv_money() const;
	int receiv_attack_power() const;
	int receiv_defence() const;
	void up_xp(int money);
};
#endif 

#include "includes.hpp" 

// Player location and position
class Position {
// private
private:
	// lvl in dangeon
	int LvlDangeon{ 0 };
	// wave of monsters
	short MonstersWave{ 0 };
// public
public:
	// constructor
	Position() {
		LvlDangeon = 0;
		MonstersWave = 0;
	}
	// get lvl in dangeon
	int GetLvl()
	{
		return LvlDangeon;
	}
	// get value wave of monsters
	short GetWave()
	{
		return MonstersWave;
	}
	// up lvl in dangeon
	int UpLvl()
	{
		LvlDangeon++;
		return LvlDangeon;
	}
	// up wave of monsters
	short UpWave()
	{
		MonstersWave++;
		if (MonstersWave > 5)
		{
			std::cout << "\nYou are going down below\n" << "Your Lvl dangeon : " << UpLvl() << '\n';
		}
		MonstersWave = 1;
		return MonstersWave;
	}
};


// class for make player
class Player{
// private
private:
	std::string Name{};
	int MaxHealth{10};
	int Health{10};
	int Damage{1};
	bool is_died{false};
	Position position;
// public
public:
	// constructor
	Player(std::string _name) {
		Name = _name;
	}
	// get the player's health value
	int GetHealth()
	{
		std::cout << "Your health : " << Health << '\n' << "Your maximal health : " << MaxHealth << '\n';
		return Health;
	}
	// get player damage value
	int GetDamage()
	{
		std::cout << "Your damage : " << Damage << '\n';
		return Damage;
	}
	// get player name
	std::string GetName()
	{
		std::cout << "Your name : " << Name << '\n';
		return Name;
	}
	// restoration of health
	int Healing(int value)
	{
		Health += value;
		if (Health > MaxHealth)
		{
			Health = MaxHealth;
			std::cout << "You have maximal hits\n";
		}
		std::cout << "You healing on " << value << "hits\n";
		return Health;
	}
	// enemy damage
	void EnemyDamage(int _enemyDamage)
	{
		Health -= _enemyDamage;
		CheckDied();
		DiedMessage();
	}
	// display player statistics 
	void GetStat()
	{
		std::cout << "You have : \nName : " << Name << "\nHealth - " << Health << '/' << MaxHealth << "\nDamage - " << Damage << '\n';
	}
	// set max health value
	void SetMaxHealth(int _mhealth)
	{
		MaxHealth = _mhealth;
		if (Health > MaxHealth)
		{
			Health = MaxHealth;
		}
		CheckDied();
		DiedMessage();
	}
	// check if the player is dead
	bool CheckDied()
	{
		if (Health > 0)
		{
			return is_died;
		}
		is_died = true;
		return is_died;
	}
	// death message
	void DiedMessage()
	{
		if (is_died)
		{
			std::cout << "You died\n";
		}
	}
	// set player`s damage
	void SetDamage(int _damage)
	{
		Damage = _damage;
	}
};
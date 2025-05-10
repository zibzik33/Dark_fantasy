#include "includes.hpp"

// class for make player
class Player
{
// private
private:
	std::string Name;
	int MaxHealth;
	int Health;
	int Damage;
	bool is_died = false;
// public
public:
	// constructor
	Player(int _health, std::string _name) {
		MaxHealth = _health;
		Name = _name;
		Damage = 1;
		Health = _health;
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
};
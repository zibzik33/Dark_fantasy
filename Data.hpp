#include "includes.hpp"

// класс для создания игрока 
class Player
{
// приватно
private:
	std::string Name;
	int MaxHealth;
	int Health;
	int Damage;
// публично
public:
	// конструктор
	Player(int _health, std::string _name) {
		MaxHealth = _health;
		Name = _name;
		Damage = 1;
		Health = _health;
	}
	// получить значение здоровья игрока
	int GetHealth()
	{
		std::cout << "Your health : " << Health << '\n' << "Your maximal health : " << MaxHealth << '\n';
		return Health;
	}
	// получить значение урона игрока
	int GetDamage()
	{
		std::cout << "Your damage : " << Damage << '\n';
		return Damage;
	}
	// получить имя игрока
	std::string GetName()
	{
		std::cout << "Your name : " << Name << '\n';
		return Name;
	}
	// восстановление здоровья 
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
	// вражеский урон
	void EnemyDamage(int _enemyDamage)
	{
		Health -= _enemyDamage;
		if (Health <= 0)
		{
			std::cout << "You died\n";
		}
	}
	// вывести статистики игрока 
	void GetStat()
	{
		std::cout << "You have : \nName : " << Name << "\nHealth - " << Health << '/' << MaxHealth << "\nDamage - " << Damage << '\n';
	}
};
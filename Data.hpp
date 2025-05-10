#include "includes.hpp"

// ����� ��� �������� ������ 
class Player
{
// ��������
private:
	std::string Name;
	int MaxHealth;
	int Health;
	int Damage;
	bool is_died = false;
// ��������
public:
	// �����������
	Player(int _health, std::string _name) {
		MaxHealth = _health;
		Name = _name;
		Damage = 1;
		Health = _health;
	}
	// �������� �������� �������� ������
	int GetHealth()
	{
		std::cout << "Your health : " << Health << '\n' << "Your maximal health : " << MaxHealth << '\n';
		return Health;
	}
	// �������� �������� ����� ������
	int GetDamage()
	{
		std::cout << "Your damage : " << Damage << '\n';
		return Damage;
	}
	// �������� ��� ������
	std::string GetName()
	{
		std::cout << "Your name : " << Name << '\n';
		return Name;
	}
	// �������������� �������� 
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
	// ��������� ����
	void EnemyDamage(int _enemyDamage)
	{
		Health -= _enemyDamage;
		CheckDied();
		DiedMessage();
	}
	// ������� ���������� ������ 
	void GetStat()
	{
		std::cout << "You have : \nName : " << Name << "\nHealth - " << Health << '/' << MaxHealth << "\nDamage - " << Damage << '\n';
	}
	// ������ �������� ������������� ��������
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
	// ��������� ���� �� �����
	bool CheckDied()
	{
		if (Health > 0)
		{
			return is_died;
		}
		is_died = true;
		return is_died;
	}
	// ��������� � ������
	void DiedMessage()
	{
		if (is_died)
		{
			std::cout << "You died\n";
		}
	}
};
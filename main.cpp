#include "Data.hpp"

int main()
{
	Player player(25, "Zahar");
	while (!player.CheckDied())
	{
		player.GetStat();
		player.EnemyDamage(5);
		std::cout << '\n';
	}
	

	return 0;
}
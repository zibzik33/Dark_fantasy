#include "Data.hpp"

//int AskPlayer()
//{
//	
//}

int main()
{
	bool is_game{true};
	while(is_game)
	{ 
		std::string name{};

		std::cout << "Enter name : ";
		std::cin >> name;

		Player player(name);

		while (!player.CheckDied())
		{

		}

		
	}

	return 0;
}
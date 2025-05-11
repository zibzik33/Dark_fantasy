#include "Data.hpp"

bool is_game{true};
short GameCommand{0};

short MainMenu();

int main()
{
	std::string name{};

	std::cout << "Enter name : ";
	std::cin >> name;

	Player player(name);
	
	while(is_game)
	{ 
		// main menu
		GameCommand = MainMenu();
		if (GameCommand == 1)
		{

		}
		else
		{
			is_game = false;
		}

	}

	return 0;
}

short MainMenu()
{
	short Command{};
	while (true)
	{
		std::cout << "\n1) New Game\n2) Quit\nEnter command : ";
		std::cin >> Command;
		if (Command > 2 || Command <= 0)
		{
			continue;
		}
		else 
		{
			return Command;
		}
	}
}
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Error: could not open file" << std::endl;
		return (EXIT_FAILURE);
	}

	BitcoinExchange exchange;

	exchange.run(av[1]);

	return (EXIT_SUCCESS);
}
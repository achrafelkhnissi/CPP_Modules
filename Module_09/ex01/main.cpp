#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./RPN \"<expression>\"" << std::endl;
        return EXIT_FAILURE;
    }

    RPN rpn;
    rpn.run(av[1]);

    return EXIT_SUCCESS;
}

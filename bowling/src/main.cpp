#include <iostream>
#include "Game.hpp"

int main(int ac, char *av[]) {
	try {

		Game g;
		for (int i = 1; i < ac; i++) {
			g.add(std::atoi(av[i]));
		}
		std::cout << "Game Score: " << g.score() << std::endl;

	} catch (...) {
		std::cout << "something went wrong" << std::endl;
	}
}

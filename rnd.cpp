#include "ApeX.h"

namespace ApeX {

	int Random::rnd(int maxNumber, std::string mode, int seed) {
		if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
		if (mode == "default") {
			srand(time(0));

			return rand() % maxNumber;
		}
		else if (mode == "custom") {
			srand(seed);

			return rand() % maxNumber;
		}
		else {
			ApeX::Error::error(ApeX::Error::errorType(3), "Unknown mode \"" + mode + "\"");
			return NULL;
		}
	}

}
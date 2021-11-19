#include "ApeX.h"

namespace ApeX {

	int Random::rnd(int maxNumber, std::string mode, int seed) {
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
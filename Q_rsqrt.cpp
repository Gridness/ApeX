#include "ApeX.h"

namespace ApeX {

	float Vector::Q_rsqrt(float number) {
		if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
		const float x2 = number * 0.5f;
		const float threehalfs = 1.5f;

		union {
			float f;
			uint32_t i;
		} conv = {number};
		conv.i = 0x5f3759df - (conv.i >> 1);
		conv.f = threehalfs - x2 * conv.f * conv.f;

		return conv.f;
	}

}
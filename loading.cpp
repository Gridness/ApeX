#include "ApeX.h"

namespace ApeX {

    void Utils::loading(int amountOfIterations, float animationSpeed)
    {
        for (int i = 0; i < amountOfIterations; i++) {
            std::cout << "|";
            Sleep(animationSpeed * 1000);
            std::cout << "\b";
            std::cout << "/";
            Sleep(animationSpeed * 1000);
            std::cout << "\b";
            std::cout << "-";
            Sleep(animationSpeed * 1000);
            std::cout << "\b";
            std::cout << "\\";
            Sleep(animationSpeed * 1000);
            std::cout << "\b";
        }
    }
}
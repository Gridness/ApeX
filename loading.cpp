#include "ApeX.h"

namespace ApeX {

    void Utils::loading(int amountOfIterations, float animationSpeed)
    {
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
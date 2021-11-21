#include "ApeX.h"

namespace ApeX {
    void Error::error(errorType errorType, std::string errorMessage, std::string additionalInfo)
    {
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
        std::cout << "[Error: " << errorType << "] " << errorMessage << "\n";
        std::cout << additionalInfo << "\n";
    }
}
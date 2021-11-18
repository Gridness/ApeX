#include "ApeX.h"

namespace ApeX {
    void Error::error(errorType errorType, std::string errorMessage, std::string additionalInfo)
    {
        std::cout << "[Error: " << errorType << "] " << errorMessage << "\n";
        std::cout << additionalInfo << "\n";
    }
}
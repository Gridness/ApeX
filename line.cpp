#include "ApeX.h"

namespace ApeX {
    void Print::line(int lineType, int length, char texture, bool hasCorners, char cornerTexture)
    {
        if (length <= 0) {
            ApeX::Error::error(ApeX::Error::errorType(1), "Length of the line must be more than 0");
        }
        else if (lineType != 1 && lineType != 2) {
            ApeX::Error::error(ApeX::Error::errorType(2), "Inserted line type does not exist");
        }
        else if (lineType == 1) {
            for (int i = 0; i < length; i++) {
                if (hasCorners) {
                    if (i == 0 || i == length - 1) {
                        std::cout << cornerTexture;
                    }
                    else {
                        std::cout << texture;
                    }
                }
                else {
                    std::cout << texture;
                }
            }
        }
        else {
            for (int i = 0; i < length; i++) {
                if (hasCorners) {
                    if (i == 0 || i == length - 1) {
                        std::cout << cornerTexture;
                    }
                    else {
                        std::cout << texture;
                    }
                }
                else {
                    std::cout << texture;
                }
                std::cout << "\n";
            }
        }
    }
}
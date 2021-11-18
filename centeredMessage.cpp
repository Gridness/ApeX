#include "ApeX.h"

namespace ApeX {
    void Print::centeredMessage(std::string message, int relativeWidth, bool endLine)
    {
        if (relativeWidth < message.length()) {
            relativeWidth = message.length() + 4;
        }
        bool front = true;

        for (int i = message.length(); i < relativeWidth; i++) {
            if (front) {
                message = " " + message;
            }
            else {
                message = message + " ";
            }
            front = !front;
        }

        if (endLine) {
            std::cout << message.c_str() << "\n";
        }
        else {
            std::cout << message.c_str();
        }
    }
}
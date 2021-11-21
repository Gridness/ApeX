#include "ApeX.h"

namespace ApeX {
    void Print::stylizedMessage(std::string message, int windowWidth, char cornerStyle, char topAndBottomBorderStyle, char sideBorderStyle, bool isCentered, bool printTop, bool printBottom) {
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
        if (windowWidth < message.length()) {
            windowWidth = message.length() + 4;
        }
        bool front = true;

        if (printTop) {
            std::cout << cornerStyle;
            for (int i = 0; i < windowWidth; i++) {
                std::cout << topAndBottomBorderStyle;
            }
            std::cout << cornerStyle << "\n";
            std::cout << sideBorderStyle;
        }
        else {
            std::cout << sideBorderStyle;
        }

        if (isCentered) {
            for (int i = message.length(); i < windowWidth; i++) {
                if (front) {
                    message = " " + message;
                }
                else {
                    message = message + " ";
                }
                front = !front;
            }
        }
        else {
            message = " " + message;
            for (int i = message.length(); i < windowWidth; i++) {
                message += " ";
            }
        }
        std::cout << message.c_str();

        if (printBottom) {
            std::cout << sideBorderStyle << "\n";
            std::cout << cornerStyle;
            for (int i = 0; i < windowWidth; i++) {
                std::cout << topAndBottomBorderStyle;
            }
            std::cout << cornerStyle << "\n";
        }
        else {
            std::cout << sideBorderStyle << "\n";
        }
    }
}
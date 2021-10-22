#include <Windows.h>
#include <string>
#include "ApeX.h"

namespace ApeX {

	void Print::printMessage(std::string message, int windowWidth, char cornerStyle, char topAndBottomBorderStyle, char sideBorderStyle, bool printTop, bool printBottom) {
        if (windowWidth < message.length()) {
            ApeX::Error::error(ApeX::Error::errorType(1), "Width of the frame must be more or equal to the message's length", "Width of the frame "  + std::to_string(windowWidth) + " is less than the message's length " + std::to_string(message.length()));
        }
        else {
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

            for (int i = message.length(); i < windowWidth; i++) {
                if (front) {
                    message = " " + message;
                }
                else {
                    message = message + " ";
                }
                front = !front;
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

    void Copyright::copyright()
    {
        std::vector<std::vector<char>> logo = {
            {'#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#'},
            {'\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '\040'},
            {'\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040'},
            {'\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040'},
            {'\040', '\040', '#', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040'},
            {'\040', '#', '#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#', '#', '\040'},
            {'#', '#', '#', '#', '#', '#', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '#', '#', '#', '#', '#'},
        };

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 26; j++) {
                std::cout << logo[i][j];
            }
            std::cout << "\n";
        }

        std::cout << "\n";

        ApeX::Print::printMessage("APE-X", 24, 43, 45, 124, false, false);
        ApeX::Print::printMessage("Version 0.1.4 alpha", 24, 43, 45, 124, false, false);
        ApeX::Print::printMessage("ALPHA. WORK IN PROGRESS", 24, 43, 45, 124, false, false);

        std::cout << "\n";

        ApeX::Copyright::displayCopyrightInfo();

        Sleep(3000);
        system("cls");
    }

    void Copyright::displayCopyrightInfo()
    {
        std::cout << "ApeX (c) Gridness 2021\n";
        std::cout << "This software is disributed via MIT license. All rights reserved";
    }

    void Error::error(errorType errorType, std::string errorMessage, std::string additionalInfo)
    {
        std::cout << "[Error: " << errorType << "] " << errorMessage << "\n";
        std::cout <<  additionalInfo << "\n";
    }

}
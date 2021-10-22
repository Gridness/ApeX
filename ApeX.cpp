#include "ApeX.h"

namespace ApeX {

	void Print::stylizedMessage(std::string message, int windowWidth, char cornerStyle, char topAndBottomBorderStyle, char sideBorderStyle, bool isCentered, bool printTop, bool printBottom) {
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

    void Print::centeredMessage(std::string message, int relativeWidth, bool endLine)
    {
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

        //ApeX::Print::stylizedMessage("APE-X", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("Version 0.2 alpha", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("ALPHA. WORK IN PROGRESS", 25, 43, 45, 124, true, false, false);

        ApeX::Print::centeredMessage("APE-X", 27, true);
        ApeX::Print::centeredMessage("Version 0.2 alpha", 27, true);
        ApeX::Print::centeredMessage("ALPHA. WORK IN PROGRESS", 27, true);

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
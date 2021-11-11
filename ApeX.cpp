#define _CRT_SECURE_NO_WARNINGS

#include "ApeX.h"

#define FORMATTING_DEFINES 0
#if FORMATTING_DEFINES
    #define RESET   "\033[0m"
    #define BLACK   "\033[30m"      /* Black */
    #define RED     "\033[31m"      /* Red */
    #define GREEN   "\033[32m"      /* Green */
    #define YELLOW  "\033[33m"      /* Yellow */
    #define BLUE    "\033[34m"      /* Blue */
    #define MAGENTA "\033[35m"      /* Magenta */
    #define CYAN    "\033[36m"      /* Cyan */
    #define WHITE   "\033[37m"      /* White */
    #define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
    #define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
    #define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
    #define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
    #define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
    #define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
    #define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
    #define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#endif

#define X_VER 0
#define Y_VER 2
#define Z_VER 2

#define DEV_BUILD 1
#if DEV_BUILD
    #define VERSION_TYPE "alpha"
#endif

#if !defined FORMATTING_DEFINES
    #error FORMATTING_DEFINES is not defined
#endif

#if !defined DEV_BUILD
    #error DEV_BUILD is not defined
#endif

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

        int relativeWidth = logo.size() + 2;

        for (auto & i : logo) {
            for (char j : i) {
                std::cout << j;
            }
            std::cout << "\n";
        }

        std::cout << "\n";

        //ApeX::Print::stylizedMessage("APE-X", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("Version 0.2 alpha", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("ALPHA. WORK IN PROGRESS", 25, 43, 45, 124, true, false, false);

        ApeX::Print::centeredMessage("APE-X", relativeWidth, true);
        if (Z_VER == 0) {
            ApeX::Print::centeredMessage("Version " + std::to_string(X_VER) + "." + std::to_string(Y_VER) + " " + VERSION_TYPE, 27, true);
        }
        else {
            ApeX::Print::centeredMessage("Version " + std::to_string(X_VER) + "." + std::to_string(Y_VER) + "." + std::to_string(Z_VER) + " " + VERSION_TYPE, relativeWidth, true);
        }

        if(VERSION_TYPE != NULL){
            std::string versionType = VERSION_TYPE;
            for(char & i : versionType){
                i = ::toupper(i);
            }
            ApeX::Print::centeredMessage(versionType + ". WORK IN PROGRESS", relativeWidth, true);
        }

        std::cout << "\n";

        ApeX::Copyright::displayCopyrightInfo();
        ApeX::Print::centeredMessage("", relativeWidth);
        ApeX::Utils::loading(3);

        //Sleep(3000);
        system("cls");
    }

    void Copyright::displayCopyrightInfo()
    {
        time_t theTime = time(NULL);
        struct tm* aTime = localtime(&theTime);

        int year = aTime->tm_year + 1900;

        if (year == 2021) {
            std::cout << "ApeX (c) Gridness 2021\n";
        }
        else {
            std::cout << "ApeX (c) Gridness 2021 - " << year << "\n";
        }
        
        std::cout << "This software is disributed via MIT license. All rights reserved";
    }

    void Error::error(errorType errorType, std::string errorMessage, std::string additionalInfo)
    {
        std::cout << "[Error: " << errorType << "] " << errorMessage << "\n";
        std::cout <<  additionalInfo << "\n";
    }

    void Output::showVector(std::vector<int> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }  
    }

    void Output::showVector(std::vector<short> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<long> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<float> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<double> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<bool> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<char> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::showVector(std::vector<std::string> vector, int rows, bool tabulated)
    {
        if (vector.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent vector was given");
        }
        else {
            const int valuesInRow = vector.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << "\t";
                    counter++;
                }
            }
            else {
                for (int i = 0; i < vector.size(); i++) {
                    if (counter == valuesInRow) {
                        std::cout << "\n";
                        counter = 0;
                    }
                    std::cout << vector[i] << " ";
                    counter++;
                }
            }
        }
    }

    void Output::show2DVector(std::vector<std::vector<int>> vector2D, int rows, bool tabulated) {
        if(vector2D.empty()){
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        } else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if(tabulated){
                for(int i = 0; i < vector2D.size(); i++){
                    for(int j = 0; j < vector2D[i].size(); j++){
                        if(counter == valuesInRow){
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            } else {
                for(int i = 0; i < vector2D.size(); i++){
                    for(int j = 0; j < vector2D[i].size(); j++){
                        if(counter == valuesInRow){
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << " ";
                        counter++;
                    }
                }
            }
        }
    }

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
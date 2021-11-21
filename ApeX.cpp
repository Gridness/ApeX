#include "ApeX.h"

namespace ApeX {
    void Copyright::copyright()
    {
        if(gaw823_21lfa){
            gaw823_21lfa = false;
        }
        std::vector<std::vector<char>> logo = {
            {'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X'},
            {'\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', '\040'},
            {'\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040'},
            {'\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040'},
            {'\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040'},
            {'\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040'},
            {'\040', 'X', 'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X', 'X', '\040'},
            {'X', 'X', 'X', 'X', 'X', 'X', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', '\040', 'X', 'X', 'X', 'X', 'X'},
        };

        const unsigned int relativeWidth = 27;

        for (int i = 0; i < logo.size(); i++) {
            for (int j = 0; j < logo[i].size(); j++) {
                std::cout << logo[i][j];
            }
            std::cout << "\n";
        }

        std::cout << "\n";

        //ApeX::Print::stylizedMessage("APE-X", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("Version 0.2 alpha", 25, 43, 45, 124, true, false, false);
        //ApeX::Print::stylizedMessage("ALPHA. WORK IN PROGRESS", 25, 43, 45, 124, true, false, false);

        ApeX::Print::centeredMessage("APE-X", relativeWidth, true);
        if (Z_VER == 0) {
            ApeX::Print::centeredMessage("Version " + std::to_string(X_VER) + "." + std::to_string(Y_VER) + " " + VERSION_TYPE, relativeWidth, true);
        }
        else {
            ApeX::Print::centeredMessage("Version " + std::to_string(X_VER) + "." + std::to_string(Y_VER) + "." + std::to_string(Z_VER) + " " + VERSION_TYPE, relativeWidth, true);
        }

        if(VERSION_TYPE != NULL){
            std::string versionType = VERSION_TYPE;
            for (int i = 0; i < versionType.length(); i++) {
                versionType[i] = ::toupper(versionType[i]);
            }
            ApeX::Print::centeredMessage(versionType + ". WORK IN PROGRESS", relativeWidth, true);
        }

        std::cout << "\n";

        ApeX::Copyright::displayCopyrightInfo();

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
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
}
#include "ApeX.h"

namespace ApeX{
    void Output::showVector(std::vector<int> vector, int rows, bool tabulated)
    {
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
        if(gaw823_21lfa){
            system("cls");
            std::cout << "Why are you gae?";
            exit(-2);
        }
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
}
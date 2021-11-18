#include "ApeX.h"

namespace ApeX {
    void Output::show2DVector(std::vector<std::vector<int>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<short>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<long>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<float>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<double>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<char>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<bool>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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

    void Output::show2DVector(std::vector<std::vector<std::string>> vector2D, int rows, bool tabulated) {
        if (vector2D.empty()) {
            ApeX::Error::error(ApeX::Error::errorType(4), "An empty or a non-existent 2D vector was given");
        }
        else {
            const int valuesInRow = vector2D.size() / rows;
            int counter = 0;
            if (tabulated) {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
                            std::cout << "\n";
                            counter = 0;
                        }
                        std::cout << vector2D[i][j] << "\t";
                        counter++;
                    }
                }
            }
            else {
                for (int i = 0; i < vector2D.size(); i++) {
                    for (int j = 0; j < vector2D[i].size(); j++) {
                        if (counter == valuesInRow) {
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
}
#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
#include <conio.h>
#include <chrono>
#include <sstream>
#include <ctime>
#include <cctype>

#pragma once
#pragma omp parallel for
#pragma omp parallel while

namespace ApeX {

	class Print {
	public:
		static void stylizedMessage(std::string message, int windowWidth, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, bool printTop = true, bool printBottom = true);
		static void centeredMessage(std::string message, int relativeWidth, bool endLine = false);
		static void line(int lineType, int length, char texture = '-', bool hasCorners = true, char cornerTexture = '+');
	};

	class Format {
	public:
		static void applyColor(std::string mode = "default", std::string msg = NULL, std::string color = NULL);
	};

	class Output {
	public:
		static void showVector(std::vector<int> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<short> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<long> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<float> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<double> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<bool> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<char> vector, int rows = 1, bool tabulated = false);
		static void showVector(std::vector<std::string> vector, int rows = 1, bool tabulated = false);

        static void show2DVector(std::vector<std::vector<int>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<short>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<long>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<float>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<double>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<bool>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<char>> vector2D, int rows = 1, bool tabulated = false);
        //static void show2DVector(std::vector<std::vector<std::string>> vector2D, int rows = 1, bool tabulated = false);
	};

	class Utils {
	public:
		static void loading(int amountOfIterations = 1, float animationSpeed = 0.2);
	};

	/* class TerminalUI {
	public:
		static void initUI(std::vector<std::string> menus, char selectionKey);
	private:
		static void color(int color);
		static void goToXY(int x, int y);
	}; */

	class Copyright {
	public:
		static void copyright();
	private:
		// static bool firstLaunch;
		static void displayCopyrightInfo();
	};

	class Error {
	public:
		enum errorType {
			SOMETHING_WENT_WRONG = -1,
			UNKNOWN,
			INCORRECT_LENGTH,
			INVALID_TYPE,
			INVALID_VALUE,
			EMPTY_RANGE
		};
		static void error(errorType errorType, std::string errorMessage, std::string additionalInfo = NULL);
	};

}

/*Namespace is yet to be implemented*/
namespace ApeXDebug {

    /*Gather info about the CPU*/
    class CPU {

    };

    /*Gather info about the RAM*/
    class RAM {

    };

    /*Gather info about the VRAM*/
    class VRAM {

    };

    class Debug {
    public:
        /* NOT YET IMPLEMENTED */
        // static void measureExecutionTime(std::string mode = "default");
        /* NOT YET IMPLEMENTED */
    };

}
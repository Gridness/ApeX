#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>

#pragma once
#pragma omp parallel for
#pragma omp parallel while

namespace ApeX {

	class Print {
	public:
		static void printMessage(std::string message, int windowWidth, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, bool printTop = true, bool printBottom = true);
	};

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
			INCORRECT_LENGTH
		};
		static void error(errorType errorType, std::string errorMessage, std::string additionalInfo = NULL);
	};

}
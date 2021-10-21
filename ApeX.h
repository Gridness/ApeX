#include <iostream>
#include <vector>

#pragma once

namespace ApeX {

	class Print {
	public:
		static void printMessage(std::string message, int windowWidth, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool printTop = true, bool printBottom = true);
	};

	class Copyright {
	public:
		static void copyright();
	private:
		static void displayCopyrightInfo();
	};

}
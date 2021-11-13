#include <iostream>
#include <vector>
#include <windows.h>
#include <string>
#include <conio.h>
#include <chrono>
#include <sstream>
#include <ctime>
#include <cctype>

#pragma once
#pragma omp parallel for // multithreading???
#pragma omp parallel while // multithreading???

/*Outline of namespaces
 * namespace ApeX {    }
 * namespace ApeXDebug {    } [NYI]*/
namespace ApeX {

	/*This class contains methods to display messages in console
	in a certain way
	*/
	class Print {
	public:
		
		/*Displays a message in console in a pseudo-frame
		Arguments:
			• message - determines what message should be displayed
			• windowWidth - determines the width of the pseudo-frame
			• cornerStyle - determines the character of corners of the pseudo-frame
			• topAndBottomStyle - determines the character of top and bottom of the pseudo-frame
			• sideBorderStyle - determines the character of borders of the pseudo-frame
			• isCentered - determines weather the message should be centered relatively to the width of the pseudo-frame
			• printTop - determines weather the top part of the pseudo-frame should be displayed
			• printBottom - determines weather the bottom part of the pseudo-frame should be displayed
		*/
		static void stylizedMessage(std::string message, int windowWidth, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, bool printTop = true, bool printBottom = true);
		
		/*Displays a message, centered relatively to the inserted width
		Arguments:
			• message - determines what message should be displayed
			• relativeWidth - determines the width which will be used to center the message
			• endLine - determines weather the line should be ended after the message
		*/
		static void centeredMessage(std::string message, int relativeWidth, bool endLine = false);
		
		/*Displays a line of characters
		Arguments:
			• lineType - determines weather the line should be horizontal or vertical
			• length - determines the length of the line
			• texture - determines the character the line should be made of
			• hasCorners - determines weather the beginning and the end of the line should have a different texture
			• cornerTexture - determines the character the beginning and the end of the line should be made of
		*/
		static void line(int lineType, int length, char texture = '-', bool hasCorners = true, char cornerTexture = '+');
	};

	/*This class contains methods display 1D and 2D vectors
	in console in a certain way
	*/
	class Output {
	public:
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<int> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<short> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<long> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<float> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<double> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<bool> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
		static void showVector(std::vector<char> vector, int rows = 1, bool tabulated = false);
        /*Displays a 1D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
            • tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
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

	/*This class contains methods to display copyright information
	in console. This class is temporarily public and will be
	automized
	*/
	class Copyright {
	public:
        /*Displays copyright screen*/
		static void copyright();
	private:
		// static bool firstLaunch;
		static void displayCopyrightInfo();
	};

	/*This class contains methods to display errors
	and their definitions
	*/
	class Error {
	public:
        /*Determines possible lib errors and the corresponding errors' codes. Used for displaying lib errors*/
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
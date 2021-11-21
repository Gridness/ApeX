#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <windows.h>
#include <string>
#include <conio.h>
#include <chrono>
#include <thread>
#include <sstream>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <math.h>

#define X_VER 0
#define Y_VER 2
#define Z_VER 0

#define DEV_BUILD 1
#if DEV_BUILD
	#define VERSION_TYPE "beta"
#endif

#if !defined DEV_BUILD
	#error DEV_BUILD is not defined
#endif

#pragma once

/*Namespace of the ApeX library*/
namespace ApeX {

	/*If added to a string, resets all formatiing options*/
	extern const std::string RESET;

	/*If added to a string, sets all subsequent characters in BLACK*/
	extern const std::string BLACK;
	/*If added to a string, sets all subsequent characters in RED*/
	extern const std::string RED;
	/*If added to a string, sets all subsequent characters in GREEN*/
	extern const std::string GREEN;
	/*If added to a string, sets all subsequent characters in YELLOW*/
	extern const std::string YELLOW;
	/*If added to a string, sets all subsequent characters in BLUE*/
	extern const std::string BLUE;
	/*If added to a string, sets all subsequent characters in MAGENTA*/
	extern const std::string MAGENTA;
	/*If added to a string, sets all subsequent characters in BLACK*/
	extern const std::string CYAN;
	/*If added to a string, sets all subsequent characters in GRAY*/
	extern const std::string GRAY;
	/*If added to a string, sets all subsequent characters in WIHTE*/
	extern const std::string WIHTE;

	/*Allows to determine a vector in 2D space
	Taken from https://www.youtube.com/watch?v=n4zUgtDk95w [10:06]
	*/
	struct vec2 {
		float x, y;

		vec2(float value) : x(value), y(value) {}
		vec2(float _x, float _y) : x(_x), y(_y) {}

		vec2 operator+(vec2 const& other) { return vec2(x + other.x, y + other.y); }
		vec2 operator-(vec2 const& other) { return vec2(x - other.x, y - other.y); }
		vec2 operator*(vec2 const& other) { return vec2(x * other.x, y * other.y); }
		vec2 operator/(vec2 const& other) { return vec2(x / other.x, y / other.y); }
	};

	/*Allows to determine a vector in 3D space*/
	struct vec3 {
		float x, y, z;

		vec3(float value) : x(value), y(value), z(value) {}
		vec3(float _x, float _y, float _z) : x(_x), y(_y),  z(_z) {}

		vec3 operator+(vec3 const& other) { return vec3(x + other.x, y + other.y, z + other.z); }
		vec3 operator-(vec3 const& other) { return vec3(x - other.x, y - other.y, z - other.z); }
		vec3 operator*(vec3 const& other) { return vec3(x * other.x, y * other.y, z * other.z); }
		vec3 operator/(vec3 const& other) { return vec3(x / other.x, y / other.y, z / other.z); }
	};

	/*This class contains methods to display messages in console
	in a certain way
	*/
	class Print {
	public:
		
		/*Displays a message in console in a pseudo-frame
		Arguments:
			• message - determines what message should be displayed
			• windowWidth - determines the width of the pseudo-frame. If this argument is left as default, the width will be scaled correspondingly to the message's length
			• cornerStyle - determines the character of corners of the pseudo-frame
			• topAndBottomStyle - determines the character of top and bottom of the pseudo-frame
			• sideBorderStyle - determines the character of borders of the pseudo-frame
			• isCentered - determines weather the message should be centered relatively to the width of the pseudo-frame
			• printTop - determines weather the top part of the pseudo-frame should be displayed
			• printBottom - determines weather the bottom part of the pseudo-frame should be displayed
		*/
		static void stylizedMessage(std::string message, int windowWidth = 0, char cornerStyle = '+', char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, bool printTop = true, bool printBottom = true);
		
		/*Displays a message, centered relatively to the inserted width
		Arguments:
			• message - determines what message should be displayed
			• relativeWidth - determines the width which will be used to center the message. If this argument is left as default, the width will be scaled correspondingly to the message's length
			• endLine - determines weather the line should be ended after the message
		*/
		static void centeredMessage(std::string message, int relativeWidth = 0, bool endLine = false);
		
		/*Displays a line of characters
		Arguments:
			• lineType - determines weather the line should be horizontal or vertical
			• length - determines the length of the line
			• texture - determines the character the line should be made of
			• hasCorners - determines weather the beginning and the end of the line should have a different texture
			• cornerTexture - determines the character the beginning and the end of the line should be made of
		*/
		static void line(std::string lineType, int length, char texture = '-', bool hasCorners = true, char cornerTexture = '+');
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

		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<int>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<short>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<long>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<float>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<double>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<bool>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<char>> vector2D, int rows = 1, bool tabulated = false);
		/*Displays a 2D vector's containment
		Arguments:
			• vector - determines the 1D vector to be displayed
			• rows - determines the amount of rows vectors' containment to be separated into
			• tabulated - determines weather vectors' containment should be displayed with tabulation
		*/
        static void show2DVector(std::vector<std::vector<std::string>> vector2D, int rows = 1, bool tabulated = false);
	};

	extern bool gaw823_21lfa;

	/*This class contains methods to display copyright information in console
	*/
	class Copyright {
	public:
        /*Displays copyright screen. This method has to be used before any
		other methods of the library*/
		static void copyright();
	private:
		static void displayCopyrightInfo();
	};

	/*This class contains different methods for RNG
	*/
	class Random {
	public:
		/*Returns a random number from 0 to maxNumber
		Arguments:
			• maxNumber - determines the upper limit of the number generation
			• mode - determines the RNG mode:
				1) default - generates a truly random number
				2) custom - allows to use a custom seed
			• seed - determines the algorithm of the number generation (only for "custom" mode)
		If you want to generate more than 1 number, please, use Sleep(1000) after each generation
		*/
		static int rnd(int maxNumber, std::string mode = "default", int seed = 0);
	};

	/*This class contains different methods for vectors
	*/
	class Vector {
	public:
		/*Returns a length of a vector
		Arguments:
			• vector - determines the vector which length will be evaluated
		*/
		static float length(vec2 const& vector) { return sqrt(vector.x * vector.x + vector.y * vector.y); };
		static float length(vec3 const& vector) { return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z); };

		/*Returns a normalized 3D vector of a given 3D vector
		Arguments:
			• vector - determines the 3D vector to normalize
		*/
		static vec3 norm(vec3 vector) { return vector / length(vector); };

		/*Returns a reverse square root
		Arguments:
			• number - number to get a reverse square root value of
		This is a quick reverse square root algorithm used in Quake 3
		*/
		static float Q_rsqrt(float number);
	};

	/*This class contains different utils methods for differentt purposes
	*/
	class Utils {
	public:
		/*Shows a loading animation in console
		Arguments:
			• amountOfIterations - determines the 1amount of full animation loops
			• animationSpeed - determines the animation phase shift speed
		*/
		static void loading(int amountOfIterations = 1, float animationSpeed = 0.2);

		/*Re
		Arguments:
			• amountOfIterations - determines the 1amount of full animation loops
			• animationSpeed - determines the animation phase shift speed
		*/
		static float clamp(float value, float min, float max) { return fmax(fmin(value, max), min); };
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
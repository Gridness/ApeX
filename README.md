# ApeX
ApeX is a static library for C++ software. Originally it was created to make C++ studying easier, so it has functions to complete common tasks with just one line of code. But who knows, maybe this library will get bigger some day.
P.S. This readme is not finished and it doesn't include some new methods. To see them, check ApeX.h file. Sorry for the inconvenience
# Recommended version
0.1.7.1 alpha
# How to install
Go to the releases tab and pick a version of ApeX library of your choice. There are always 2 versions of the library: stable and experimental. Download ApeX.zip archive and unpack its content into your project's folder. Then in the code write #include "dir/ApeX.h" and #pragma comment(lib, "dir/ApeX.lib")
# Classes and methods
## Print
This class contains methods to display beautiful frame-style menus in console
### stylizedMessage(std::string message, int windowWidth, char topAndBottomBorderStyle, char cornerStyle, char sideBorderStyle, bool isCentered, bool printTop, bool printBottom)
This method displays a message in a sylized frame
### centeredMessage(std::message, int relativeWidth, bool endLine)
This method displays a centered message
## Copyright
This temporary class contains methods to display copyright information
### copyright()
This method displays copyright information with ApeX library logo

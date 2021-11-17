# ApeX
ApeX is a static library for C++ software. Originally it was created to make C++ studying easier, so it has functions to complete common tasks with just one line of code. But who knows, maybe this library will get bigger some day.

P.S. This readme is not finished and it doesn't include some new methods. To see them, check ApeX.h file. Sorry for the inconvenience
# Recommended version
0.2.3 alpha
# How to install
Go to the releases tab and pick a version of ApeX library of your choice. There are always 2 versions of the library: stable and experimental. Download ApeX.zip archive and unpack its content into your project's folder. Then in the code write
```C++
#include "dir/ApeX.h"
```
and 
```C++
#pragma comment(lib, "dir/ApeX.lib")
```
# Classes and methods
```C++
class Print
```
This class contains methods to display messages in console in a certain way
```C++
static void stylizedMessage(std::string message, int windowWidth, char cornerStyle = '+', 
char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, 
bool printTop = true, bool printBottom = true)
```
Displays a message in console in a pseudo-frame

Arguments:

```std::string message``` - determines what message should be displayed

```int windowWidth``` - determines the width of the pseudo-frame

```char cornerStyle``` - determines the character of corners of the pseudo-frame

```char topAndBottomBorderStyle``` - determines the character of top and bottom of the pseudo-frame

```char sideBorderStyle``` - determines the character of borders of the pseudo-frame

```bool isCentered``` - determines weather the message should be centered relatively to the width of the pseudo-frame

```bool printTop``` - determines weather the top part of the pseudo-frame should be displayed

```bool printBottom``` - determines weather the bottom part of the pseudo-frame should be displayed

```C++
static void centeredMessage(std::string message, int relativeWidth, bool endLine = false)
```
Displays a message, centered relatively to the inserted width

Arguments:

```std::string message``` - determines what message should be displayed

```int relativeWidth``` - determines the width which will be used to center the message

```bool endLine``` - determines weather the line should be ended after the message

```C++
static void line(int lineType, int length, char texture = '-', 
bool hasCorners = true, char cornerTexture = '+')
```
Displays a line of characters

Arguments:

```int lineType``` - determines weather the line should be horizontal or vertical (1 for horizontal and 2 for vertical)

```int length``` - determines the length of the line

```char texture``` - determines the character the line should be made of

```bool hasCorners``` - determines weather the beginning and the end of the line should have a different texture

```char cornerTexture``` - determines the character the beginning and the end of the line should be made of

```C++
class Output
```
This class contains methods display 1D and 2D vectors in console in a certain way

```C++
static void showVector(std::vector<data_type> vector, 
int rows = 1, bool tabulated = false)
```
Displays a 1D vector's containment

Arguments:

```std::vector<data_type> vector``` - determines the 1D vector to be displayed

```int rows``` - determines the amount of rows vectors' containment to be separated into

```bool tabulated``` - determines weather vectors' containment should be displayed with tabulation

```C++
static void show2DVector(std::vector<std::vector<data_type>> vector2D, 
int rows = 1, bool tabulated = false)
```
Displays a 2D vector's containment

Arguments:

```std::vector<std::vector<data_type>> vector``` - determines the 1D vector to be displayed

```int rows``` - determines the amount of rows vectors' containment to be separated into

```bool tabulated``` - determines weather vectors' containment should be displayed with tabulation

```C++
class Copyright
```
This class contains methods to display copyright information in console. This class is temporarily public and will be automized

```C++
static void copyright();
```
Displays copyright screen

```C++
class Error
```
This class contains methods to display errors and their definitions

```C++
static void error(errorType errorType, std::string errorMessage, std::string additionalInfo = NULL)
```
This method is used inside the library to trigger different errors

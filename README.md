# ApeX
ApeX is a static library for C++ software. Originally it was created to make C++ studying easier, so it has functions to complete common tasks with just one line of code. But who knows, maybe this library will get bigger some day.
# Recommended version
0.1.1 beta
# How to install
Go to the releases tab and pick a version of ApeX library of your choice. Download ApeX.zip archive and unpack its content into your project's folder. Then in the code write
```C++
#include "dir/ApeX.h"
```
and 
```C++
#pragma comment(lib, "dir/ApeX.lib")
```

Please note that ```.lib``` files can be only used inside Visual Studio and CLion, otherwise if you are compiling on Windows which means you use MinGW, you need to use ```.a``` version of the library which is not available yet
# Classes and methods
```C++
class Print
```
This class contains methods to display messages in console in a certain way
```C++
static void stylizedMessage(std::string message, int windowWidth = 0, char cornerStyle = '+', 
char topAndBottomBorderStyle = '-', char sideBorderStyle = '|', bool isCentered = true, 
bool printTop = true, bool printBottom = true)
```
Displays a message in console in a pseudo-frame

Arguments:

```std::string message``` - determines what message should be displayed

```int windowWidth``` - determines the width of the pseudo-frame. If no such length was given, it will be equal to ```message.length() + 4```

```char cornerStyle``` - determines the character of corners of the pseudo-frame

```char topAndBottomBorderStyle``` - determines the character of top and bottom of the pseudo-frame

```char sideBorderStyle``` - determines the character of borders of the pseudo-frame

```bool isCentered``` - determines weather the message should be centered relatively to the width of the pseudo-frame

```bool printTop``` - determines weather the top part of the pseudo-frame should be displayed

```bool printBottom``` - determines weather the bottom part of the pseudo-frame should be displayed

```C++
static void centeredMessage(std::string message, int relativeWidth  = 0, bool endLine = false)
```
Displays a message, centered relatively to the inserted width

Arguments:

```std::string message``` - determines what message should be displayed

```int relativeWidth``` - determines the width which will be used to center the message. If no such length was given, it will be equal to ```message.length() + 4```

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

```std::vector<std::vector<data_type>> vector``` - determines the 2D vector to be displayed

```int rows``` - determines the amount of rows vectors' containment to be separated into

```bool tabulated``` - determines weather vectors' containment should be displayed with tabulation

```C++
class Utils
```
This class contains different utils methods for differentt purposes

```C++
static void loading(int amountOfIterations = 1, float animationSpeed = 0.2)
```
Shows a loading animation in console

Arguments:

```amountOfIterations``` - determines the 1amount of full animation loops

```animationSpeed``` - determines the animation phase shift speed

```C++
class Random
```
This class contains different methods for RNG

```C++
static int rnd(int maxNumber, std::string mode = "default", int seed = 0)
```
Returns a random number from 0 to maxNumber. This method uses ```<ctime>``` to exclude pseudo-random generation, so if you want to generate more than 1 number at a time, please, use Sleep(1000) after each generation

Arguments:

```maxNumber``` - determines the upper limit of the number generation

```mode``` - determines the RNG mode
| Mode  | Action |
| ------------- | ------------- |
| default  |  generates a truly random number |
| custom  | allows to use a custom seed |

```seed``` - determines the algorithm of the number generation

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
# Issues
- [ ] https://github.com/Gridness/ApeX/issues/1
- [ ] https://github.com/Gridness/ApeX/issues/2
- [x] https://github.com/Gridness/ApeX/issues/3
# License
[MIT](https://raw.githubusercontent.com/Gridness/ApeX/stable/LICENSE)

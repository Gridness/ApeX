# ApeX
ApeX is a static library for C++ software. Originally it was created to make C++ studying easier, so it has functions to complete common tasks with just one line of code. But who knows, maybe this library will get bigger some day.
# Recommended version
0.2 beta (MinGW)

0.1.1 beta (Visual Studio and CLion)
# How to install
### Visual Studio and CLion
Go to the releases tab and pick a version of ApeX library of your choice. Download ApeX.zip archive and unpack its content into your project's folder. Then in the code write
```C++
#include "dir/ApeX.h"
```
and 
```C++
#pragma comment(lib, "dir/ApeX.lib")
```
Note that you don't need ```.a``` file from the archive
### MinGW (Windows only)
Go to the releases tab and pick a version of ApeX library of your choice. Download ApeX.zip archive and unpack its content into your project's folder. Then in the code write
```C++
#include "dir/ApeX.h"
```
Note that you don't need ```.lib``` file from the archive. Also, to compile your code, you should now write
```
g++ your_code.cpp ApeX.a
```
instead
# Global variables
| Variable | Data type | Action |
| :---:        | :---:          | :---:         |
| ```ApeX::RESET```  | ```std::string```     | Resets all formatting options    |
| ```ApeX::BLACK```    | ```std::string```       | Turns all subsequent characters in BLACK      |
| ```ApeX::RED```    | ```std::string```       | Turns all subsequent characters in RED      |
| ```ApeX::GREEN```    | ```std::string```       | Turns all subsequent characters in GREEN      |
| ```ApeX::YELLOW```    | ```std::string```       | Turns all subsequent characters in YELLOW      |
| ```ApeX::BLUE```    | ```std::string```       | Turns all subsequent characters in BLUE      |
| ```ApeX::MAGENTA```    | ```std::string```       | Turns all subsequent characters in MAGENTA      |
| ```ApeX::CYAN```    | ```std::string```       | Turns all subsequent characters in CYAN      |
| ```ApeX::GRAY```    | ```std::string```       | Turns all subsequent characters in GRAY      |
| ```ApeX::WHITE```    | ```std::string```       | Turns all subsequent characters in WHITE      |
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

```int relativeWidth``` - determines the width which will be used to center the message. If no such length was given, it would be made equal to ```message.length() + 4```

```bool endLine``` - determines weather the line should be ended after the message

```C++
static void line(std::string lineType, int length, char texture = '-', 
bool hasCorners = true, char cornerTexture = '+')
```
Displays a line of characters

Arguments:

```std::string lineType``` - determines weather the line should be horizontal or vertical
| Line type  | Action |
| ------------- | ------------- |
| horizontal  |  makes the line horizontal |
| vertical  | makes the line vertical |

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
static float clamp(float value, float min, float max) { return fmax(fmin(value, max), min); };
```
Locks a given number between the min and max values

Arguments:

```float value``` - determines the value to be locked

```float min``` - determines the bottom limit of comparison

```float max``` - determines the upper limit of comparison

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
class Vector
```
This class contains different methods for vectors

```C++
static float length(vecDIMENSION const& vector) { return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z); };
```
Returns a length of a vector

Arguments:

```vecDIMENSION const& vector``` - determines the vector which length will be evaluated

```C++
static vec3 norm(vec3 vector) { return vector / length(vector); };
```
Returns a normalized 3D vector of a given 3D vector

Arguments:

```vec3 vector``` - determines the 3D vector to normalize

```C++
static float Q_rsqrt(float number);
```
Returns a reverse square root. This is a quick reverse square root algorithm used in Quake 3

Arguments:

```float number``` - number to get a reverse square root value of

```C++
class Copyright
```
This class contains methods to display copyright information in console

```C++
static void copyright();
```
Displays copyright screen. Be noticed that without this method using all other methods of the library will end up with your program's crash

```C++
class Error
```
This class contains methods to display errors and their definitions

```C++
static void error(errorType errorType, std::string errorMessage, std::string additionalInfo = NULL)
```
This method is used inside the library to trigger different errors
# License
[MIT](https://raw.githubusercontent.com/Gridness/ApeX/stable/LICENSE)

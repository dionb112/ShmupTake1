/// <summary>
/// main program just for testing all my new function of this class
/// @author Dion Buckley
/// @date Feb 2017
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3D.h"
#include "MyMatrix3.h"
#include <SFML\Graphics.hpp>
#include <string.h>
/// <summary>
/// initialising all the function members
/// </summary>
void testScale();
void testTranslate();
void testRotateX();
void testRotateY();
void testRotateZ();
void testEqual();
void testNotEqual();
void testCol();
void testRow();
void testInverse();
void testDet();
void testTranspose();
void testMultiplyMxS();
void testMultiplyMxV();
void testMultiplyMxM();
void testSub();
void testAdd();
void testConstructors();
/// <summary>
/// main function, duh, calling all test functions
/// </summary>
/// <returns>winning</returns>
int main()
{
	testScale();
	testTranslate();
	testRotateX();
	testRotateY();
	testRotateZ();
	testNotEqual();
	testEqual();
	testCol();
	testRow();
	testInverse();
	testDet();
	testTranspose();
	testMultiplyMxS();
	testMultiplyMxV();
	testMultiplyMxM();
	testSub();
	testAdd();
	testConstructors();
	std::system("pause");
	return EXIT_SUCCESS;
}
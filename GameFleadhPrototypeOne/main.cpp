#ifdef _DEBUG
#pragma comment(lib, "sfml-graphics-d.lib")
#pragma comment(lib, "sfml-audio-d.lib")
#pragma comment(lib, "sfml-system-d.lib")
#pragma comment(lib, "sfml-window-d.lib")
#pragma comment(lib, "sfml-main-d.lib")
#pragma comment(lib, "sfml-network-d.lib")

#else
#pragma comment(lib, "sfml-graphics.lib")
#pragma comment(lib, "sfml-audio.lib")
#pragma comment(lib, "sfml-system.lib")
#pragma comment(lib, "sfml-window.lib")
#pragma comment(lib, "sfml-main.lib")
#pragma comment(lib, "sfml-network.lib")
#endif

#include "Game.h"
#include "MyVector3D.h"
#include "MyMatrix3.h"
#include <string.h>

/// <summary>
/// initialising all the function members for vector tests
/// </summary>
void vectorTests();
void first3DTest();
void addTest();
void subtractTest();
void multiplyTest();
void divideTest();
void plusEqualTest();
void minuesEqualTest();
void equalTest();
void notEqualTest();
void lengthTest();
void lengthSquaredTest();
void dotTest();
void angleBetweenTest();
void unitTest();
void crossProductTest();
void normaliseTest();
void projectionTest();
void rejectionTest();

/// <summary>
/// initialising all the function members for matrix tests
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
int main()
{
	vectorTests();
	first3DTest();
	addTest();
	subtractTest();
	multiplyTest();
	divideTest();
	plusEqualTest();
	minuesEqualTest();
	equalTest();
	notEqualTest();
	lengthTest();
	lengthSquaredTest();
	dotTest();
	angleBetweenTest();
	unitTest();
	crossProductTest();
	normaliseTest();
	projectionTest();
	rejectionTest();

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

	Game game;
	game.run();

	return 0;
}



/// <summary>
/// Testing creation of a null vector using default constructor
/// </summary>
void vectorTests()
{
	MyVector3D vectorA;
	std::cout << "-------- default constructor --------------" << std::endl;
	std::cout << vectorA.toString() << std::endl;
	std::cout << "[ 0, 0, 0 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Test creation of a single vector
/// </summary>
void first3DTest()
{
	MyVector3D vectorA{ 4.2, -7, 0 };
	std::cout << "-------- Creation of a single vector --------------" << std::endl;
	std::cout << vectorA.toString() << std::endl;
	std::cout << "[ 4.2, -7, 0 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing addition of two 3d vectors
/// </summary>
void addTest()
{
	MyVector3D vectorA{ 4.2, -7, 0 };
	MyVector3D vectorB{ 3, 2, -0.4 };
	MyVector3D result{};
	result = vectorA + vectorB;
	std::cout << "-------- Addition of two vectors --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 7.2, -5, -0.4 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing subtraction between two 3D vectors
/// </summary>
void subtractTest()
{
	MyVector3D vectorA{ 10, -5, 3.3 };
	MyVector3D vectorB{ -3, 2.2, 0 };
	MyVector3D result{};
	result = vectorA - vectorB;
	std::cout << "-------- Subtraction of two vectors --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 13, -7.2, 3.3 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing multiplication of a vector by a scalar
/// </summary>
void multiplyTest()
{
	MyVector3D vectorA{ 0, -5, 3.3 };
	MyVector3D result{};
	double scalar = 5;
	result = vectorA * scalar;
	std::cout << "-------- Multiplication of a vector by a number --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 0, -25, 16.5 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing division operator using a vector and a double value
/// </summary>
void divideTest()
{
	MyVector3D vectorA{ 0, -5, 3.3 };
	MyVector3D result{};
	double divisor = 5;
	result = vectorA / divisor;
	std::cout << "-------- Division of a vector by a number --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 0, -1, 0.66 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing the += operator using two vectors
/// </summary>
void plusEqualTest()
{
	MyVector3D vectorA{ 0, -5, 3.3 };
	MyVector3D vectorB{ 1, 1.1, -1.3 };
	MyVector3D result{};
	result = vectorA += vectorB;
	std::cout << "-------- Addition of two vectors using += --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 1, -3.9, 2 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}
/// <summary>
/// Testing the -= operator using two vectors
/// </summary>
void minuesEqualTest()
{
	MyVector3D vectorA{ 77, -66, 5.5 };
	MyVector3D vectorB{ 5.5, 77, 0 };
	MyVector3D result{};
	result = vectorA -= vectorB;
	std::cout << "-------- Subtraction of two vectors using -= --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "[ 71.5, -143, 5.5]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing the == operator using two vectors
/// </summary>
void equalTest()
{
	bool result = false;
	MyVector3D vectorA{ 1, 0, -1 };
	MyVector3D vectorB{ 1, 0, -1 };
	std::cout << "-------- Equality between two vectors --------------" << std::endl;
	if (vectorA == vectorB)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	std::cout << result << std::endl;
	std::cout << "1 (true)" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// Testing the != operator using two vectors
/// </summary>
void notEqualTest()
{
	bool result = false;
	MyVector3D vectorA{ 1, 0, -1 };
	MyVector3D vectorB{ 1, 0, -1 };
	std::cout << "-------- Inequality between two vectors --------------" << std::endl;
	if (vectorA != vectorB)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	std::cout << result << std::endl;
	std::cout << "0 (false)" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing the length function for a 3d vector
/// </summary>
void lengthTest()
{
	MyVector3D vectorA{ -1, 0, 1.1 };
	double length = vectorA.length();
	std::cout << "-------- Length of a 3D Vector  --------------" << std::endl;
	std::cout << length << std::endl;
	std::cout << "1.486606875" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing length squared function for a 3D vector
/// </summary>
void lengthSquaredTest()
{
	MyVector3D vectorA{ -1, 0, 1.1 };
	double lengthSquared = vectorA.lengthSquared();
	std::cout << "-------- Length of a 3D Vector, squared  --------------" << std::endl;
	std::cout << lengthSquared << std::endl;
	std::cout << "2.21" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing dot product function with two vectors
/// </summary>
void dotTest()
{
	MyVector3D vectorA{ 9, -4, 0 };
	MyVector3D vectorB{ 0, 1.1, -4 };
	const double dot = vectorA.dot(vectorB);
	std::cout << "-------- Dot product of two 3D vectors --------------" << std::endl;
	std::cout << dot << std::endl;
	std::cout << "-4.4" << std::endl;
	std::cout << "========================================" << std::endl;
}
/// <summary>
/// testing angleBetween function with two vectors
/// </summary>
void angleBetweenTest()
{
	MyVector3D vectorA{ 9, -4, 0 };
	MyVector3D vectorB{ 0, 1.1, -4 };
	const double angle = vectorA.angleBetween(vectorB);
	std::cout << "-------- Angle between two 3D vectors in degrees --------------" << std::endl;
	std::cout << angle << " Degrees" << std::endl;
	std::cout << "96.182 Degrees" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing unit function with one vector,
/// it takes that vectors length and creates a new one using it, with length of one.
/// </summary>
void unitTest()
{
	MyVector3D vectorA{ -1, 0, 1.1 };
	MyVector3D unit{};
	unit = vectorA.unit();
	std::cout << "-------- The Unit vector from another vector  --------------" << std::endl;
	std::cout << unit.toString() << std::endl;
	std::cout << unit.length() << std::endl;
	std::cout << "[ -0.672673, 0, 0.73994 ]" << std::endl;
	std::cout << "1" << std::endl;

	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing the crossProduct function using two 3D vectors
/// </summary>
void crossProductTest()
{
	MyVector3D vectorA{ 42, 2.4, 0 };
	MyVector3D vectorB{ 0, 1.1, -42 };
	MyVector3D cross{};
	cross = vectorA.crossProduct(vectorB);
	std::cout << "-------- Cross product of two 3D vectors --------------" << std::endl;
	std::cout << cross.toString() << std::endl;
	std::cout << "[-100.8, 1764, 46.2]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing normalise function using a vector
/// </summary>
void normaliseTest()
{
	MyVector3D vectorA{ -1, 0, 1.1 };
	vectorA.normalise();
	std::cout << "-------- A 3D Vector normalised --------------" << std::endl;
	std::cout << vectorA.toString() << std::endl;
	std::cout << vectorA.length() << std::endl;

	std::cout << "[ -0.672673, 0, 0.73994 ]" << std::endl;
	std::cout << "1" << std::endl;

	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing projection of one vector onto another
/// </summary>
void projectionTest()
{
	MyVector3D vectorA{ 1, 2, 3 };
	MyVector3D vectorB{ 0, 1.1, -1 };
	MyVector3D proj{};
	proj = vectorA.projection(vectorB);
	std::cout << "-------- Projection of VectorA onto VectorB --------------" << std::endl;
	std::cout << proj.toString() << std::endl;
	std::cout << "[0, -0.39819, 0.361991 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}

/// <summary>
/// testing rejection of one vector onto another
/// </summary>
void rejectionTest()
{
	MyVector3D vectorA{ 1, 2, 3 };
	MyVector3D vectorB{ 0, 1.1, -1 };
	MyVector3D rejection{};
	rejection = vectorA.rejection(vectorB);
	std::cout << "-------- Rejection of VectorA onto VectorB --------------" << std::endl;
	std::cout << rejection.toString() << std::endl;
	std::cout << "[ 1, 2.39819, 2.63801 ]" << std::endl;
	std::cout << "========================================" << std::endl;
}


/// <summary>
/// Below is a series of test function testing each specific operation this class must carry out, they seem to be all working correctly.. seem..
/// </summary>

void testScale()
{
	MyVector3D test{ 1, 0, 1 };
	double scalingFactor(5);
	MyMatrix3 standardScale{};
	standardScale = MyMatrix3::scale(scalingFactor);
	test = standardScale * test;
	std::cout << "-------- 2D Scaling of 3D Vector by standard 3D scaling Matrix --------------" << std::endl;
	std::cout << test.toString() << std::endl;
	std::cout << "{ -5.5, 0, 1 }" << std::endl;
	std::system("pause");
}
void testTranslate()
{
	MyVector3D test{ 0, 1.1, 1 };
	MyVector3D displacement{ -5, 0, 1 };
	MyMatrix3 standardTranslation{};
	standardTranslation = MyMatrix3::translation(displacement);
	test = standardTranslation * test;
	std::cout << "-------- 2D Translation of 3D  Vector by standard 3D translation Matrix --------------" << std::endl;
	std::cout << test.toString() << std::endl;
	std::cout << "{ -5, 1.1, 1 }" << std::endl;
	std::system("pause");
}
void testRotateX()
{
	MyVector3D test{ 0, 1.1, 1 };
	double angleInRads = 60;
	MyMatrix3 rotationStd{};
	rotationStd = MyMatrix3::rotationX(angleInRads);
	test = rotationStd * test;
	std::cout << "-------- Clockwise Rotation of 3D Vector about X axis through angle 60(rads) --------------" << std::endl;
	std::cout << test.toString() << std::endl;
	std::cout << "[ 0, 1.41603, -0.452628 ]" << std::endl;
	std::system("pause");
}
void testRotateY()
{
	MyVector3D test{ 0, 1.1, 1 };
	double angleInRads = 60;
	MyMatrix3 rotationStd{};
	rotationStd = MyMatrix3::rotationY(angleInRads);
	test = rotationStd * test;
	std::cout << "-------- Clockwise Rotation of 3x3 Matrix about Y axis through angle 60(rads) --------------" << std::endl;
	std::cout << test.toString() << std::endl;
	std::cout << "[ -0.866025, 1.1, 0.5 ]" << std::endl;
	std::system("pause");
}
void testRotateZ()
{
	MyVector3D test{ 0, 1.1, 1 };
	double angleInRads = 60;
	MyMatrix3 rotationStd{};
	rotationStd = MyMatrix3::rotationZ(angleInRads);
	test = rotationStd * test;
	std::cout << "-------- Clockwise Rotation of 3x3 Matrix about Z axis through angle 60(rads) --------------" << std::endl;
	std::cout << test.toString() << std::endl;
	std::cout << "[ 0.952628, 0.55, 1 ]" << std::endl;
	std::system("pause");
}
void testNotEqual()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyMatrix3 b{ -1, 0 , 0.1,1,1,1,1,1,1 };
	bool result = (a != b);
	std::cout << "-------- Two Matrix being not equal --------------" << std::endl;
	std::cout << result << std::endl;
	std::cout << "{ false  ( 0 ) }" << std::endl;
	std::system("pause");
}
void testEqual()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyMatrix3 b{ -1, 0 , 0.1,1,1,1,1,1,1 };
	bool result = (a == b);
	std::cout << "-------- Two Matrix being equal --------------" << std::endl;
	std::cout << result << std::endl;
	std::cout << "{ true  ( 1 ) }" << std::endl;
	std::system("pause");
}
void testCol()
{
	MyMatrix3 a{ -1, 0, 0.1, 2, 3, 4, 5, 6, 7 };
	int test = 0;
	MyVector3D result{};
	result = a.column(test);
	std::cout << "-------- Getting Collumn 0 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{  -1, 2, 5 }" << std::endl;
	test = 1;
	result = a.column(test);
	std::cout << "-------- Getting Collumn 1 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ 0, 3, 6 }" << std::endl;
	test = 2;
	result = a.column(test);
	std::cout << "-------- Getting Collumn 2 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ 0.1, 4, 7 }" << std::endl;
	std::system("pause");
}
void testRow()
{
	MyMatrix3 a{ -1, 0 , 0.1,2,3,4,5,6,7 };
	int test = 0;
	MyVector3D result{};
	result = a.row(test);
	std::cout << "-------- Getting Row 0 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{  -1, 0, 0.1  }" << std::endl;
	test = 1;
	result = a.row(test);
	std::cout << "-------- Getting Row 1 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ 2, 3, 4 }" << std::endl;
	test = 2;
	result = a.row(test);
	std::cout << "-------- Getting Row 2 of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ 5, 6, 7 }" << std::endl;
	std::system("pause");
}
void testInverse()
{
	MyMatrix3 a{ -1, 0 , 0.1,2,3,4,5,6,7 };
	MyMatrix3 result{};
	result = a.inverse();
	std::cout << "-------- Inverse of a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ -1.11111, 0.222222, -0.111111 ] [ 2.22222, -2.77778, 1.55556 ] [ -1.11111, 2.22222, -1.11111 ] }" << std::endl;
	std::system("pause");
}
void testDet()
{
	MyMatrix3 a{ -1, 0 , 0.1,2,3,4,5,6,7 };
	double result = 0;
	result = a.determinant();
	std::cout << "-------- Determinant of a 3x3 Matrix --------------" << std::endl;
	std::cout << result << std::endl;
	std::cout << "{ 2.700000000000001 }" << std::endl;
	std::system("pause");
}
void testTranspose()
{
	MyMatrix3 a{ -1, 0 , 0.1,2,3,4,5,6,7 };
	MyMatrix3 result{};
	result = a.transpose();
	std::cout << "-------- Transpose a 3x3 Matrix --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ -1, 2, 5] [ 0,3,6 ] [ 0.1, 4 , 7 ] }" << std::endl;
	std::system("pause");
}
void testMultiplyMxS()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	double scalar = -5;
	MyMatrix3 result{};
	result = a * scalar;
	std::cout << "-------- Multiply a Matrix by a scalar --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ 5, 0, -0.5 ] [ -5, -5, -5 ] [ -5, -5, -5 ] }" << std::endl;
	std::system("pause");
}
void testMultiplyMxV()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyVector3D b{ 1,2,3 };
	MyVector3D result{};
	result = a * b;
	std::cout << "-------- Multiply a Matrix by a 3D Vector --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ -0.7, 6, 6 }" << std::endl;
	std::system("pause");
}
void testMultiplyMxM()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyMatrix3 b{ 1,  2,  3,  4,5,6,7,8,9 };
	MyMatrix3 result;
	result = a * b;
	std::cout << "-------- Multiply two Matrices --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ -0.2999, -1.2, -2.1 ] [ 12, 15, 18 ] [ 12, 15, 18 ] }" << std::endl;
	std::system("pause");
}
void testSub()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyMatrix3 b{ 1,  2,  3,  4,5,6,7,8,9 };
	MyMatrix3 result;
	result = a - b;
	std::cout << "-------- subtraction --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ -2, -2, -2.9 ] [ -3, -4, -5 ] [ -6, -7, -8 ] }" << std::endl;
	std::system("pause");
}
void testAdd()
{
	MyMatrix3 a{ -1, 0 , 0.1,1,1,1,1,1,1 };
	MyMatrix3 b{ 1,  2,  3,  4,5,6,7,8,9 };
	MyMatrix3 result;
	result = a + b;
	std::cout << "-------- addition --------------" << std::endl;
	std::cout << result.toString() << std::endl;
	std::cout << "{ [ 0, 2, 3.1 ] [ 5, 6, 7 ] [ 8, 9, 10 ] }" << std::endl;
	std::system("pause");
}
void testConstructors()
{
	MyMatrix3 matrixA{};
	MyVector3D row1{ 1,2,3 };
	MyVector3D row2{ 4,5,6 };
	MyVector3D row3{ 7,8,9 };
	std::cout << "-------- default constructor--------------" << std::endl;
	std::cout << matrixA.toString() << std::endl;
	std::cout << "{ [ 0, 0, 0 ] [ 0, 0, 0 ] [ 0, 0, 0 ] }" << std::endl;
	matrixA = MyMatrix3{ 1.1,2.2,3.3,-4.4,5.5,6.6,7.7,8.8,9.9 };
	std::cout << "-------- 9 doubles constructor--------------" << std::endl;
	std::cout << matrixA.toString() << std::endl;
	std::cout << "{ [ 1.1, 2.2, 3.3 ] [ -4.4, 5.5, 6.6 ] [ 7.7, 8.8, 9.9 ] }" << std::endl;
	std::cout << "========================================" << std::endl;
	matrixA = { row1, row2, row3 };
	std::cout << "-------- 3 3D Vectors constructor--------------" << std::endl;
	std::cout << matrixA.toString() << std::endl;
	std::cout << "{ [1, 2, 3 ] [ 4, 5, 6 ] [ 7, 8, 9 ] }" << std::endl;
	std::cout << "========================================" << std::endl;
}

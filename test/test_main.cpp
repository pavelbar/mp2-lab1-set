#include <gtest.h>
#include <tbitfield.h>//added
#include "windows.h"//added
#include "tset.h"//added
#include <iostream>//added

int main(int argc, char **argv)
{
	using namespace std;//added
	/*
	//Пример использования №1
	cout << "***Release TBitField***"<<endl<<endl;//added
	TBitField a(4), b(4), result(4);//added
	cin >> a;//added
	cin >> b;//added
	cout << "***operator&***" << endl;//added
	result = a & b;//added
	cout << result;//added
	cout << "***operator|***" << endl;//added
	result = a | b;//added
	cout << result;//added
	cout << "***operator~ for result***" << endl;//added
	result = ~result;//added
	cout << result;//added
	*/
	/*
	//Пример использования №2
	cout << "***Release TSet***" << endl << endl;//added
	TSet a(4), b(4), result(4);//added
	cin >> a;//added
	cin >> b;//added
	cout << "***operator+***" << endl;//added
	result = a + b;//added
	cout << result;//added
	cout << "***operator* ***" << endl;//added
	result = a * b;//added
	cout << result;//added
	cout << "***operator~ for result***" << endl;//added
	result = ~result;//added
	cout << result;//added
	*/
	cout << "RUN GTEST?" << endl << endl;//added
	system("pause");//added
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

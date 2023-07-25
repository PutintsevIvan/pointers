#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
#define tab "\t"

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS




	int a = 2;
	int* pa = &a;
	// pa-pointer to'a'
	cout << a << endl;   //вывод значени€ переменной 'A' на экран	
	cout << &a << endl;  //вз€тие адресса переменной 'A' пр€мо при выводе
	cout << pa << endl;  //вывод адреса переменной 'a' хран€щегос€ в указатели'pa'
	cout << *pa << endl; // разыменовываем указатель'pa',и получаем значение переменной 'a'

	int* pb;
	int b = 3;
	pb = &b;
	cout << *pb << endl;



	//int-int
	//int*-”казатель на 'int'
	//double-'double'
	//double*-”казатель на 'double'
	//char-'char'
	//char*-”казатель на 'char'
#endif  POINTERS_BASICS

	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;
	}
	cout << endl;
}

/*
-------------------------------------------------
&-ќператор вз€ти€ адреса (Address-of operator)
*-ќператор разыменовывани€ (Deference operator)
-------------------------------------------------
*/
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
	cout << a << endl;   //����� �������� ���������� 'A' �� �����	
	cout << &a << endl;  //������ ������� ���������� 'A' ����� ��� ������
	cout << pa << endl;  //����� ������ ���������� 'a' ����������� � ���������'pa'
	cout << *pa << endl; // �������������� ���������'pa',� �������� �������� ���������� 'a'

	int* pb;
	int b = 3;
	pb = &b;
	cout << *pb << endl;



	//int-int
	//int*-��������� �� 'int'
	//double-'double'
	//double*-��������� �� 'double'
	//char-'char'
	//char*-��������� �� 'char'
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
&-�������� ������ ������ (Address-of operator)
*-�������� ��������������� (Deference operator)
-------------------------------------------------
*/
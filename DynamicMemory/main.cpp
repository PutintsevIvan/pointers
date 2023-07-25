#include<iostream>
using namespace std;
#define tab "\t"


void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int* arr,  int& n, int value);
int* push_front(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value,int index);
int* pop_back(int arr[], int& n);


void main()
{
	setlocale(LC_ALL, "");
	int n; //���������� ��������� �������
	cout << "������� ������ �������:"; cin >> n;
	int* arr = new int[n];

	FillRand (arr, n);
	Print(arr, n);
	
	int value;
	cout << "������� ����������� ��������: "; cin >> value;
    arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "������� ����������� ��������: "; cin >> value;
	
	arr = push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "������� ����������� ��������: "; cin >> value;
	cout << "������� ������ ����������� ��������: "; cin >> index;
	arr=insert(arr, n, value, index);
	Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr, n);
	delete[] arr;
	/*//1)������� ��������� ������:
	int* buffer = new int[n + 1];
	//2)�������� ������  �� ��������� �������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//������� �������� ������:
	delete[]arr;
	//4)�������� ������ ��������� ������� ������� ������ �������:
	arr = buffer;
	//5)������ ����� ����� ����� �������� ������� � ����� �������'arr'
	arr[n] = value;
	//6) ����� ���������� ���������� �������������
	n++;
	//7)��������� ���������
	Print(arr, n);*/
}
void FillRand(int arr[], const int n)
{
for (int i = 0; i < n; i++)
	{
		//��������� � �������� ������� ����� ���������� ���������� � �������� �������������
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
		//[]-�������� ��������������(subscript operator)
	}
	cout << endl;
}

int* push_back(int* arr, int& n, int value)
{
	//1)������� ��������� ������:
	int* buffer = new int[n + 1];
	//2)�������� ������  �� ��������� �������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//������� �������� ������:
	delete[]arr;
	//4)�������� ������ ��������� ������� ������� ������ �������:
	arr = buffer;
	//5)������ ����� ����� ����� �������� ������� � ����� �������'arr'
	arr[n] = value;
	//6) ����� ���������� ���������� �������������
	n++;
	//7)��������� ���������
	return arr;
}
int* push_front(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1] {};
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	delete[]arr;
	//arr = buffer;
	buffer[0] = value;
	n++;
	return arr;


}
int* insert(int* arr, int& n, int value,int index)
{
	int* buffer = new int[n + 1] {};
	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];
	delete[]arr;
	//arr = buffer;
	buffer[index] = value;
	n++;
	return arr;
}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[]arr;
	return buffer;
	
}

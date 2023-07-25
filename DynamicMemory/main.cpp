#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\----------------------------\"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n; //количество элементов массива
	cout << "введите размер массива:"; cin >> n;
	int* arr = new int[n];
	FillRand (arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добовляемое значение: "; cin >> value;
	//1)Создаем буфферный массив:
	int* buffer = new int[n + 1];
	//2)копируем данные  из исходного массива
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//удаляем исходный массив:
	delete[]arr;
	//4)Поменяем адресс исходного массива адресом нового массива:
	arr = buffer;
	//5)только после этого можно добавить элемент в конце массива'arr'
	arr[n] = value;
	//6) после добавления количество увеличивается
	n++;
	//7)проверяем результат
	Print(arr, n);
	delete[] arr;
}
void FillRand(int arr[], const int n)
{
for (int i = 0; i < n; i++)
	{
		//обращение к элементу массива через арифметику указателей и оператор разыменывания
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
		//[]-оператор индексирования(subscript operator)
	}
	cout << endl;
}


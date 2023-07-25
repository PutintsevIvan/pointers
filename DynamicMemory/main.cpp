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
	int n; //количество элементов массива
	cout << "введите размер массива:"; cin >> n;
	int* arr = new int[n];

	FillRand (arr, n);
	Print(arr, n);
	
	int value;
	cout << "Введите добовляемое значение: "; cin >> value;
    arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добовляемое значение: "; cin >> value;
	
	arr = push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "Введите добовляемое значение: "; cin >> value;
	cout << "Введите индекс добовляемое значение: "; cin >> index;
	arr=insert(arr, n, value, index);
	Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr, n);
	delete[] arr;
	/*//1)Создаем буфферный массив:
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
	Print(arr, n);*/
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

int* push_back(int* arr, int& n, int value)
{
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

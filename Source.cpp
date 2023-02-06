#include "Header.h"
void zapolnenie(int n, int m, int** arr) { //функция для заполнения массива 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1 + rand() % 100;//заполнение массива рандомными числами от 1 до 100
		}
	}

}
void print(int n, int m, int** arr) { //функция для вывода массива на экран
	for (int i = 0; i < n; i++) {
		std::cout << std::endl;
		for (int j = 0; j < n; j++) {
			std::cout << arr[i][j] << " ";
		}
	}
}
void sum(int n, int m, int** arr) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i][n - 1 - i];
	std::cout << "The sum = " << sum << std::endl;
}
int main() {
	int a;
	std::cout << "Enter value a: " << std::endl; //ввод пользователем количества строк
	std::cin >> a;
	
	int** array = new int* [a]; //динамическое выделение памяти под массив
	for (int k = 0; k < a; ++k)
		array[k] = new int[a];
	zapolnenie(a, a, array); //вызов функции для заполнения массива
	print(a, a, array); //вызов функции для вывода массива на экран
	std::cout << std::endl;
	sum(a, a, array);
	for (int i = 0; i < a; i++) //удаление памяти выделенной под массив
		delete[] array[i];
	delete array;
	
		 
	
	
	return 0;
}
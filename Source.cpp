#include "Header.h"
void zapolnenie(int n, int m, int** arr) { //������� ��� ���������� ������� 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1 + rand() % 100;//���������� ������� ���������� ������� �� 1 �� 100
		}
	}

}
void print(int n, int m, int** arr) { //������� ��� ������ ������� �� �����
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
	std::cout << "Enter value a: " << std::endl; //���� ������������� ���������� �����
	std::cin >> a;
	
	int** array = new int* [a]; //������������ ��������� ������ ��� ������
	for (int k = 0; k < a; ++k)
		array[k] = new int[a];
	zapolnenie(a, a, array); //����� ������� ��� ���������� �������
	print(a, a, array); //����� ������� ��� ������ ������� �� �����
	std::cout << std::endl;
	sum(a, a, array);
	for (int i = 0; i < a; i++) //�������� ������ ���������� ��� ������
		delete[] array[i];
	delete array;
	
		 
	
	
	return 0;
}
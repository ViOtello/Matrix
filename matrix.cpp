#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int** createMatrix(int rows, int cols) { //двухмерный массив
	int** matrix = new int* [rows];
	matrix[0] = new int[rows * cols]{};
	for (int i = 1; i < rows; i++) {
		matrix[i] = matrix[i - 1] + cols;
	}
	return matrix;
}

void fill(int* matrix[], int rows, int cols) { // заполнение функции 
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 10;
		}
		cout << "\n";
	}
}

void print(int* matrix[], int rows, int cols) { // вывод функции
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
}

void destroyMatrix(int* matrix[]) { // удаление выделенной памяти из кучи
	delete[]matrix[0];
	delete[]matrix;
}

/*
void f() {
	int* p = new int[10000];
	for (int i = 0; i < 10000; i++) {
		p[i] = rand() % 1001;
	}
	sort(p, p + 10000);
	for (int i = 0; i < 100; i++) {
		cout << p[i] << "   ";
	}
	delete[] p;
}
*/
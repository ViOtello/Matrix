#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int** createMatrix(int rows, int cols) { //двухмерный массив
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols] {};
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	return matrix;
}

void print(int* matrix[], int rows, int cols) { // вывод функции
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
}

void destroyMatrix(int* matrix[], int rows) { // удаление выделенной памяти из кучи
	for (int i = 0; i < rows; i++) {
		delete[]matrix[i];
	}
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
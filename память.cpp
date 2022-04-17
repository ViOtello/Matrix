#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Matrix.h"
using namespace std;


int main()
{
	srand(time(0));

	int** matrix = createMatrix(10, 20);
	print(matrix, 10, 20);
	destroyMatrix(matrix);
}



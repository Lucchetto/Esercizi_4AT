#include <iostream>
#include "matrix.h"

using namespace std;

int rand_int(int min, int max) {
    return rand() % max + min;
}

// This function assign a random value to all the fields of matrix
void assign_rand_matrix(int** matrix, int msize) {
	for (int y = 0; y < msize; y++) {
		for (int x = 0; x < msize; x++) {
			matrix[y][x] = rand_int(minimum, maximum);
		}
    }
}

// Print the matrix
void print_matrix(int** matrix, int msize) {
	for (int y = 0; y < msize; y++) {
		for (int x = 0; x < msize; x++) {
			cout<<setw(3);
            cout<<matrix[y][x];
		}
        cout<<endl;
	}
}

/* Matrix diagonal sum
 * true -> sum diagonal 1
 * false -> sum diagonal 2
*/
int diagonal_sum_matrix(int** matrix, int msize, bool operation) {
    int sum = 0;
    if (operation == true) {
        for (int i = 0; i < msize; i++) {
            sum += matrix[i][i];
        }
    }
    else {
        for (int i = msize; i > 0 ; i--) {
            sum += matrix[msize-i][i-1];
        }
    }
    return sum;
}
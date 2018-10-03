#include <stdlib.h>
#include <time.h>
#include <iomanip>

#define minimum 1
#define maximum 10

int rand_int(int min, int max);
void assign_rand_matrix(int** matrix, int msize);
void print_matrix(int** matrix, int msize);
int diagonal_sum_matrix(int** matrix, int msize, bool operation);
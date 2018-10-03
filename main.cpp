#include <iostream>
#include "matrix.h"

using namespace std;

int main() {
    // Ready for rand()
    srand(time(0));
   
    int msize = 10;
    int **ptr_matrix;
    ptr_matrix = new int*[msize];
    for (int i = 0; i < msize; i++) {
        ptr_matrix[i] = new int[msize];
    }
    assign_rand_matrix(ptr_matrix, msize);
    // print_matrix(ptr_matrix, msize);
    int sum1 = diagonal_sum_matrix(ptr_matrix, msize, false);
    int sum2 = diagonal_sum_matrix(ptr_matrix, msize, true);
    cout<<"The sum of the first diag is "<<sum1<<" and the sum of the second diag is"<<sum2<<endl;
    return 0;
}

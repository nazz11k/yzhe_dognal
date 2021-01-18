#include "vojd.h"

int main() {
    int n;
    cout<<"Enter a size of matrix: ";
    cin>>n;
    float** matrix=new float*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i]=new float[n];
    }
    generator(matrix, n);
    min_founder(matrix, n);
}

#include "vojd.h"

void generator(float** matrix, int n){
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j]=(((float)rand()/RAND_MAX)*(8000-100))+100;
        }
    }
    outer(matrix, n, n, "Generated matrix: ");
}

void min_founder(float** matrix, int n){
    float min=8000;
    int min_row;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(matrix[i][j]<min){
                min=matrix[i][j];
                min_row=i;
            }
        }
    }
    cout<<endl<<"Min element is "<<min<<" in row number "<<min_row+1<<endl;
    changer(matrix, n, min_row);
}

void changer(float** matrix, int n, int min_row){
    float** changed=new float *[n+1];
    for (int i = 0; i < n + 1; ++i) {
        changed[i]=new float[n];
    }
    int pos=0;
    for (int i = 0; i <n+1; ++i) {
        if(i!=min_row+1){
            changed[i]=matrix[pos];
            pos++;
        }
        else{
            for (int j = 0; j < n; ++j) {
                changed[i][j]=1;
            }
        }
    }
    outer(changed, n+1, n, "Changed matrix:");
}

void outer(float** matrix, int n, int m, string name){
    cout<<endl<<name<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<setw(9)<<setprecision(6)<<matrix[i][j];
        }
    cout<<endl;
    }
}
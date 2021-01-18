#pragma once

#include "iostream"
#include "iomanip"
#include "random"
#include "ctime"

using namespace std;

void generator(float** matrix, int n);
void min_founder(float** matrix, int n);
void changer(float** matrix, int n, int min_row);
void outer(float** matrix, int n, int m, string name);
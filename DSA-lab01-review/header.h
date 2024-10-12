//
//  header.h
//  DSA-lab01-review
//
//  Created by Nguyễn Bảo An on 11/10/24.
//

#ifndef header_h
#define header_h

#include <iostream>

using namespace std;

void swap1(int* a, int* b);

int* sum(int* a, int* b);

void inputArray(int* &a, int &n);

int* findMax(int* arr, int n);

int* findLongestAscendingSubarray(int* a, int n, int &length);

void swapArrays(int* &a, int* &b, int &na, int &nb);

#endif /* header_h */

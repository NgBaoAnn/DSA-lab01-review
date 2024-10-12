//
//  func.cpp
//  DSA-lab01-review
//
//  Created by Nguyễn Bảo An on 11/10/24.
//

#include "header.h"

void swap1(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* sum(int* a, int* b)
{
    int *sum = new int;
    *sum = *a + *b;
    return sum;
}

void inputArray(int* &arr, int &n)
{
    cout << "input n:";
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
}

int* findMax(int* arr, int n)
{
    int* max = arr;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max)
        {
            max = (arr + i);
        }
    }
    return max;
}
int* findLongestAscendingSubarray(int* a, int n, int &length) {
    if (n == 0) {  // Edge case: Empty array
        length = 0;
        return nullptr;
    }
    
    int maxLength = 1;  // Length of the longest subarray found
    int currentLength = 1;  // Current ascending subarray length
    int* longestSubarrayStart = a;  // Pointer to the start of the longest subarray found
    int* currentSubarrayStart = a;  // Pointer to the start of the current ascending subarray

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            // Continuing the ascending order
            currentLength++;
        } else {
            // Ascending order broke, check if current subarray is the longest
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestSubarrayStart = currentSubarrayStart;
            }
            // Reset current subarray
            currentSubarrayStart = &a[i];
            currentLength = 1;
        }
    }

    // Final check for the last subarray
    if (currentLength > maxLength) {
        maxLength = currentLength;
        longestSubarrayStart = currentSubarrayStart;
    }

    length = maxLength;  // Set the output length to the longest subarray length
    return longestSubarrayStart;
}

//void swapArrays(int* &a, int* &b, int &na, int &nb)
//{
//    swap(a,b
//    int
//}

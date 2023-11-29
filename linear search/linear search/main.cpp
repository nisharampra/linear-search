//
//  main.cpp
//  linear search
//
//  Created by Nisha Ramprasath on 31/10/23.
//

#include <iostream>

// C++ code to linearly search x in arr[].
  
//#include <bits/stdc++.h>
using namespace std;
  
int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
  
// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 1;
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}

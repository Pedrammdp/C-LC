#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int left, int right, int target) {
    if (right >= 1)
    {
        int mid = left + (right - 1) / 2;
        if (arr[mid] == target)
            return mid;
        
        if (target < arr[mid])
            return search(arr, left, mid -1, target);
        

        return search(arr, mid + 1, right, target);

        

    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4,10, 40};
    int target = 10;
    int n  = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, 0, n - 1, target);
    cout << result;
    return 0;
}
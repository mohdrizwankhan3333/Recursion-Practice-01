

#include<iostream>
using namespace std;

int p(int arr[], int l) {
    if (l == 1) {
        return arr[0];  // Base case: when there's only one element
    } else {
        int m = arr[l - 1];  // Store the last element of current subarray
        int max_in_rest = p(arr, l - 1);  // Recursive call to find max in the rest of the array

        return (m > max_in_rest) ? m : max_in_rest;  // Compare current element with max of rest
    }
}

int main() {
    int ar[5] = {1, 2, 3, 4, 5};
    cout << p(ar, 5);  // Output the maximum element
    return 0;
}

#include<iostream>
using namespace std;

int sum(int arr[], int l) {
    if (l == 1) {
        return arr[0];
    } else {
        return arr[l - 1] + sum(arr, l - 1);
    }
}

int main() {
    int ar[5] = {6, 5, 7, 8, 3};
    cout << sum(ar, 5);
    return 0;
}

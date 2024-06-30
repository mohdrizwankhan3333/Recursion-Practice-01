#include <iostream>
using namespace std;

// Function to print k multiples of num recursively
void printMultiples(int num, int k, int count) {
    // Base case: stop recursion when count equals k
    if (count == k) {
        cout << endl;
        return;
    }

    // Print current multiple
    cout << num * (count + 1) << " ";

    // Recursively call for next multiple
    printMultiples(num, k, count + 1);
}

int main() {
    int num = 3; // Example value of num
    int k = 5;   // Example value of k (number of multiples)

    cout << "First " << k << " multiples of " << num << ":" << endl;
    printMultiples(num, k, 0); // Start with count = 0

    return 0;
}

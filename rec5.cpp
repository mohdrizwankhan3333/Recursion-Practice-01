#include <iostream>

using namespace std;

void printNumbers(int n) {
  if (n > 0) {
    printNumbers(n - 1);
    cout << n << " ";
  }
}

int main() {
  int num;

  cout << "Enter a positive number: ";
  cin >> num;

  if (num > 0) {
    cout << "Numbers from 1 to " << num << ":" << endl;
    printNumbers(num);
    cout << endl;
  } else {
    cout << "Invalid input. Please enter a positive number." << endl;
  }

  return 0;
}

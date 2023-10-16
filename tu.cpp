#include <bits/stdc++.h>
using namespace std;

void checkLeapyear(int n) {
  if (n % 400 == 0) {
    cout << "The given year: " << n << " is a leap year" << endl;
  } else if ((n % 100 != 0) && (n % 4 == 0)) {
    cout << "The given year: " << n << " is a leap year" << endl;
  } else {
    cout << "The given year: " << n << " is not a leap year" << endl;
  }
}

int main() {
  int n;
  cin >> n;

  checkLeapyear(n);

  return 0;
}

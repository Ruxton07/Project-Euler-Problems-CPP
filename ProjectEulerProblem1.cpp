#include <iostream>

using namespace std;

int main() {
  double sum = 0;
  for(double c = 0; c < 1000; c++) {
    if(((int)(c/3*10))%10==0||((int)(c/5*10))%10==0) {
        sum += c;
    }
  }
  cout << "Sum: " << sum << endl;
}
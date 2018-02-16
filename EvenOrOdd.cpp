#include <iostream>

using namespace std;

int main() {
  
  int inputNumber;
  string  result = "Impar";
  
  cout << "Number: ";
  cin >> inputNumber;

  if (inputNumber % 2 == 0){
    result = "Par";
  }
 
 
  cout << "O número digitado é: " << endl << result << endl;
}

#include <iostream>
using namespace std;

int main() {
  string inputString;
  string reverseString;

  //get string to be reversed
  cout << "enter string to be reversed: ";
  getline(cin, inputString);

  //reverse loop to iterate through string backwards.
  for(int i = inputString.length(); i >=0; i--){
    reverseString += inputString[i];
  }
  
  cout << reverseString;
}
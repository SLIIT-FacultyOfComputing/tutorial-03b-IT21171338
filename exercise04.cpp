#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}
void input(int &len, int &wth) {
  cout <<"Enter  length:";
  cin >> len ;
  cout <<"Enter  width:";
  cin >> wth ;


}

// Implement the Input Function here
/*1. Do you get the correct values printed ?
    ans: No, It prints the assigned values in the main function
  2.Modify the parameters of your input function as given below, to use length and width as reference type parameters.
      void input(int &length, int &width);

  3.Do you get the correct values printed ?
    ans:Yes
*/
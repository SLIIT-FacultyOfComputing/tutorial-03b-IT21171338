#include <iostream>
#include <iomanip>

using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t" <<setw(12)<< "Name\t\t\t" << "Marks\t" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 <<  setw(12) << names[r]<<setw(15)<<marks[r] << endl;
 }
}
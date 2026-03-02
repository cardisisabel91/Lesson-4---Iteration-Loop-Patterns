/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int age;
   cout << "Enter age (1-120):"<<endl;
   cin >> age;
while (age < 1 || age > 120){
    cout << "Invalid, Please enter a realistic age (1-120):";
    cin >> age;
}
    return 0;
}
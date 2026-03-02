
#include <iostream>
using namespace std;
int main()
{
   int total(0);
   int counter = 0;
   int grade = 0;
   
   cout << "Enter grade or -1 to quit:";
   cin >> grade;

 while (grade != -1){
     total += grade;
     counter++;
     
     cout << "Enter next grade or -1 to quit:";
     cin >> grade;
     
     if (counter != 0){
         double average = static_cast<double>(total) / counter;
         cout << " Class average is " << average << endl;
     }else{
         cout << " No grades were entered.";
     }
 }
    return 0;
}
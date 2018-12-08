#include <iostream>
using namespace std;
string sample_switch_nilai(int);
int main()
{
    int val;
    cout << "masukan angka : ";
    cin  >> val;
    cout<<sample_switch_nilai(val);
    return 0;
}

string sample_switch_nilai(int a)
{
    string result;
   switch (a)
   {
       case 80 ... 100 :
       result = "A";
       break;

       case 65 ... 79 :
       result = "B";
       break;

       case 50 ... 64 :
       result = "C";
       break;

       case 35 ... 49 :
       result = "D";
       break;

       case 0 ... 34 :
       result = "E";
       break;
       
       default:
       result = "no range";
       break;
   }
   return result;
}


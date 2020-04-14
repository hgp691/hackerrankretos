#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n <= 9 && n >= 1){

       if(1==n){
        cout << "one" << endl;

       }if(2==n){
           cout << "two" << endl;

       }if(3==n){
           cout << "three" << endl;

       }if(4==n){
           cout << "four" << endl;
       }if(5==n){
           cout << "five" << endl;

       }if(6==n){
           cout << "six" << endl;

       }if(7==n){
           cout << "seven" << endl;

       }if(8==n){
           cout << "eight" << endl;
       }if(9==n){
           cout << "nine" << endl;
       }
    }

    else{

       cout << "the number that you put is more than 9 or less than 1" << endl;

    }

    return 0;
}

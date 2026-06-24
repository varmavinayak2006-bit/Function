#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int sum (int num )
{   int l , total , add ;
    total = 0 ;
    while (num > 0){
        l = num % 10 ;
        total = total + l ;
        l = 0 ;
        num = num / 10 ;
    }
    return total ;
}

int main() {
    int i , num , total ;
    cout<<"Enter the how many numbers you are going to enter :"<<endl ;
    cin>>i ;
    total = 0 ;
    int j ;
    for (j = 1 ; j <= i ; j++)
    {
        cin>>num ;
        cout<<"The"<<endl<<j<<" number is :"<<endl<<num <<endl;
        total = total + sum (num);

    }	// Your code here
    cout<<"The sum of digits for each number in the your given list is :"<<endl ;
    cout<<total ;
    return 0;
}
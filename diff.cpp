#include<bits/stdc++.h>
using namespace std ;
int differenceBetween(int n){
    int i , total , sum  ;
    total = 0 ;
    sum = 0 ;
    for (i = 1 ; i <= n ; i++)
    {
        total = total + i*i ;
        sum = sum + i ;
    }
    return total - sum ;
    
}
int main ()
{
    int n ; 
    cout<<"Enter the number to calculate it's difference between the square of all the numbers and the sum of all the numbers upto it :"<<endl ;
    cin>>n ;
    cout<<"The final diference is : "<<endl<<differenceBetween(n);
    return 0 ;
}
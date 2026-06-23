#include<bits/stdc++.h>
long fact (int num){
   long  fact= 1 ;
    while (num > 1){
        fact = fact * num ;
        num-- ;
    }
    return fact ;
}
int main ()
{
    std :: cout<<"Enter the number to calculate it's factorial :"<<std::endl ;
    long  no ;
    std :: cin >> no ;
    if (no == 0 || no ==1 ){
    std ::  cout<<"Factorial is : 1" ;
    return 0 ;
    }
    else {
    std :: cout<<"The factorial of given number is :"<<std :: endl <<fact(no) ;
    return 0 ;
    }
    
}
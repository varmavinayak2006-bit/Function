#include<bits/stdc++.h>
int palindrome(int num)
{
    int l , sum ;
    sum = 0 ;
    while(num > 0){
        l = num % 10 ;
        sum = sum * 10 + l ;
        num = num / 10 ;
    }
    return sum ;
}
int main ()
{
   std :: cout<<"Enter a number to get it's palindrome :"<<std::endl ;
   int no ;
   std :: cin>>no ;
  std :: cout<<"The palindromic number is :"<<std::endl<< palindrome (no) ;

}
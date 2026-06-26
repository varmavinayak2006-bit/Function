#include<bits/stdc++.h>
int simple (int principle , int intrest )
{   
    int si , time ;
    std :: cout<<"Enter your time tenure in years :"<<std :: endl ;
    std :: cin>>time ;
    si = (principle * intrest * time)/100 ; 
    return si ;
}
int main ()
{
    std :: cout<<"Enter your principle amount :"<<std :: endl ;
    int amount ;
    std :: cin>>amount ;
    int intrest = 3 ;
    std :: cout<<"Your intrest for your given amount is : "<<std :: endl ;
    std :: cout<<intrest<<std :: endl ;
    int charge = simple (amount , 3) ;
    int total ; 
    std :: cout <<"Total amount to be paid by you :"<<std :: endl ;
    total = charge + amount ;
    std :: cout <<total ;
}

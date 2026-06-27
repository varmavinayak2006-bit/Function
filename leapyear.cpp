#include<bits/stdc++.h>
int year (int num){
    if( (num % 4 == 0 && num % 100 != 0 )||num % 400 == 0 )
    {
        return 1 ;
    }
    else {
        return 0 ;
    }
}
int main (){
    int leap ;
    std :: cout<<"Enter the year to check whether it is leap or not :"<< std :: endl ;
    std :: cin >> leap ;
    if (year(leap)== 1){
        std::cout <<"The year is a leap year";
        return 0 ;
    }
    else {
        std::cout <<"The year is not a leap year";
        return 0 ;

    }
}
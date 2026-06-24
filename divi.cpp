#include<bits/stdc++.h>

int divisibility (int upper , int lower , int check )
{ int i , count ;
    count = 0 ;
    for (i =lower ; i <= upper ; i++){
        if (i%check==0){
            count ++ ;
        } }
return count ; 
}
int main ()
{
    std :: cout<<"Enter the lower limit of your range :"<<std :: endl ;
    int l; 
    std :: cin >> l ;
    std :: cout<<"Enter the upper limit of your range :"<<std :: endl ;
    int u ;
    std :: cin>> u ;
    std :: cout<<"Enter the number to check how many numbers in the range is divisble by it : "<<std :: endl ;
    int D ;
    std :: cin>>D ;
    std :: cout<<divisibility(u , l , D) ;
    return 0 ;
}
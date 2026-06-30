#include<bits/stdc++.h>
using namespace std ;
void  money(int amount)
{
    int A,B,C,D,a,b,c,d;
    // amount already with the members are as follows
        A = a = 15 ;
        B = b = 10 ;
        C = c = 5  ;
        D = d = 20 ; 
    cout<<"The lottery ticket amonut :" <<endl ;
    int fees = A + B + C + D ;
    cout<<fees ;
    cout<<"The winning pool prize is :"<<amount ;
    // calculating the proportionality
    int temp ;
    while (B>0){
        temp = A % B ;
        A  = B;
        B = temp ;
    }
    int ans = A ;
    while (C>0){
        temp = A%C ;
        A = C ;
        C = temp ;
    }
    ans = A ;
    while (D>0)
    {
        temp = A % D ;
        A = D ;
        D = temp ;
    }
        ans = A ;
        int shareA = a/ans ;
        int shareB = b/ans ;
        int shareC = c/ans ;
        int shareD = d/ans ;
        int total = shareA + shareB +shareC + shareD ;
        total = total / 4  ;
}

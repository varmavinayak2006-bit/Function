#include<bits/stdc++.h>
using namespace std ;
int gcd2num(int a , int b ){
    while(b>0){
        int temp = a % b ;
        a = b ;
        b = temp ;
    }
    return a ;
}
int gcdarray (int a[], int no ){
    
    int ans = a[0];
    for (int i = 0 ; i < no - 1 ; i++)
    {
        ans = gcd2num( ans , a[i+1]) ;
    }
    return ans ;
}
int LCM(int a[], int num){
    int value = a[0] ;
    for (int j = 1 ; j <num ;j++){
        value = ((value ) / gcd2num(value,a[j]))*a[j] ;
    }
    return value ;
}
int main(){
    int nom ;
    cout<<"How many number you will enter ? "<<endl ;
    cin>>nom ;
    int a[nom] ;
    int k ; 
    for (k = 0 ; k < nom ; k++) {
        cout<<"Enter the "<<k+1 <<" element :"<<endl ;
        cin>>a[k] ;
    }
    cout<<"The gcd of the given numbers is :"<<endl;
    cout<<gcdarray(a,nom) ;
    cout<<"The LCM of the given numbers is :"<<endl ;
    cout<<LCM(a,nom) ;
    return 0 ;

}
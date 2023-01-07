#include<iostream>
using namespace std;
int main (){
    //print fibonacci series
/*cout<<"enter the number";
int n;
cin>>n;
    int a =0;
    int b=1;
        //cout<<a;
        //cout<<b;
    for(int i=1;i<=n;i++){
     int c =a+b;
     cout<<c;
     a=b;
     b=c;
     
    }*/

    //subtract the product and sum of an digit of integer

    /*cout<<"enter the integer";
    int n;
    cin>>n;
    int prod = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum + digit;

        n= n/10;
    }
    int ans = prod - sum;
    cout<<ans;*/

    //check how many 1 bit is in entered integer
int n;
    cin>>n;
int count=0 ;
    for(int i =1;i<=32;i++){
       if(n&1){
        count++;
       }
       n=n>>1;
    }
    cout<<count;
   
    
}
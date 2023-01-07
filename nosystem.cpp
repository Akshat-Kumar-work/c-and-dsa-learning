#include<iostream>
#include<math.h>
using namespace std;
int main(){

    //convert decimal to binary
    /*int n=10;
    int digit;
    int answer=0;
    int i=0;
    while(n!=0){
        digit = n&1;
        answer = (digit*pow(10,i))+answer;
        n= n>>1;
        i++;
    }cout<<answer;*/

    //convert binary to decimal
    int n =1010;
    int answer=0;
    int digit;
    int i =0;
    while(n!=0){
    digit=n%10;
    if(digit==1){
    answer+=pow(2,i);}
    n=n/10;
    i++;
    }
    cout<<answer;
}
    
   

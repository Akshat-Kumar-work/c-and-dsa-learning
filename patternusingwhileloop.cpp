#include<iostream>
using namespace std;
int main (){

    //print box
    /*int n=4;
    int i=1; 
    while(i<=n){
         int j=1;
        while(j<=n){
       cout<<"*";
       j++;
        }
        cout<<endl;
        i++;
    }*/

    //print box of number
    
    int i=4;
    
       while(i>=1){      
        int space = 4-i;  
        while(space){ 
        cout<<" ";
        space--;        
        }
        int j=1;
        while(j<=i){
        cout<<"*";
        j++;
        }
         cout<<endl;
        i--;  
        }   
    }



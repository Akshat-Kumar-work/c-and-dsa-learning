#include<iostream>
using namespace std;

int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        if(num[i]==1){
            cout<<"1 is present"<<endl;
            break;
        }else{
            cout<<"1 is not present"<<endl;
            break;
        }
    }
}
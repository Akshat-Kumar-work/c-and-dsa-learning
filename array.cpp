#include<iostream>
#include<limits.h>
using namespace std;

//find max and min element in array
/*int maxnum (int num[],int size){
    int max = INT32_MIN;
    for(int i=0;i<size;i++){
    if(num[i]>max){
        max=num[i];}
    }return max;
}
int minnum (int num[],int size){
    int min = INT32_MAX;
    for(int i=0;i<size;i++){
    if(num[i]<min){
        min=num[i];}
        }return min; 
}
int main(){
   int num [100];
   int size;
   cin>>size;
   for(int i=0;i<size;i++){
     cin>>num[i];
   }
   cout<<maxnum(num,size)<<endl;
   cout<<minnum(num,size);
}*/

//find sum of all element in array
/*int main(){
int  number [100];
int size;
cin>>size;
int sum=0;
for(int i=0;i<size;i++){
    cin>>number[i];
}for(int i=0;i<size;i++){
    sum+=number[i];
} 
cout<<sum;
}*/

//reverse an array
int main(){
    int num[10]={1,2,3,4,5,6,7,8,9,10};
        for(int i=9;i>=0;i--){
           cout<<num[i];
        }
    }

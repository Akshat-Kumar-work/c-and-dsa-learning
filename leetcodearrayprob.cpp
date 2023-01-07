#include<iostream>
#include<vector>
using namespace std;

//swap alternate number in an array
/*void swap(int num[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(num[i],num[i+1]);
        }
    }
}
int main(){
    int num [8]={1,2,3,4,5,6,7,8};
    swap(num,8);
    for(int i=0;i<8;i++){
        cout<<num[i];
    }   
}*/

//give unique element if every element is twice in array
/*int unique (int arr[],int size){
    int ans=0;
    for (int i =0; i< size;i++){
    ans = ans^arr[i];
    }
    return ans;
}
int main (){
    int arr[7]={1,2,}
}*/

int findDuplicate (vector<int> arr){
      
    int ans=0;
    for(int i=0;i<arr.size();i++){
      ans =ans ^arr[i];
    }
    for(int i=1;i<arr.size();i++){
      ans = ans^i;
    }
    return ans;
}

int main(){
    vector<int> arr;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<arr.size();i++){
        arr.push_back(i);
    }
    int ans = findDuplicate(arr);
    cout<<ans;
}


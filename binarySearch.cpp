#include<iostream>
using namespace std;

/*int binarysearch(int array[],int size,int key){
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;

    for(int start =0;start<=end;){
        if(array[mid]==key){
            return mid;
        }
        //go to left part
        if(array[mid]>key){
            end = mid-1;
        }else{//go to right part
            start = mid+1;
        }
        mid =(start+end)/2;
    }
    return -1;
}
int main(){
    int evenarray[6]={2,4,6,8,12,18};
    int oddarray[5]={3,8,11,14,16};
    int sol = binarysearch(evenarray,6,2);
    cout<<sol;
}*/

//find first and last position in a sorted array
/*int firstocc (int array[], int size ,int key ){
int start =0;
int end = size-1;
int mid = (start+end)/2;
int ans;
while(start<=end){
    if(array[mid]==key){
        ans = mid;
        end = mid-1;
    }
    else if(array[mid]>key){
        end = mid-1;
    }else {
        start= mid+1;
    }
    mid = (start+end)/2;
}
return ans;
}
int lastocc (int array[], int size ,int key ){
int start =0;
int end = size-1;
int mid = (start+end)/2;
int ans;
while(start<=end){
    if(array[mid]==key){
        ans = mid;
        start = mid+1;
    }
    else if(array[mid]>key){
        end = mid-1;
    }else {
        start= mid+1;
    }
    mid = (start+end)/2;
}
return ans;
}


int main() {
    int array [6]={1,2,3,3,5,6};
   int output = firstocc(array,6,3);
   cout<<output;
   int a = lastocc(array,6,3);
   cout<<a;
}*/

//peak index in mountain array
/*int peak(int array[],int size){
    int s=0;
    int e = size -1;
    int mid= (s+e)/2;
    while(s<e){
     if(array[mid]<array[mid+1]){
        s=mid+1;
     }else{
        e=mid;
     }
     mid=(s+e)/2;
    }
    return s;
}
int main(){
    int array[4]={3,4,5,1};
    int element = peak(array,4);
cout<<"index of peak element is: " << element;
}*/

//find pivot in an array
/*int pivot(vector<int>& arr,int size){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start <end){
        if(arr[mid]>0){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}*/

//search in a rotated sorted array
/*int pivot(vector<int>& arr,int n){
    int s = 0;
    int e= n-1;
    int mid = s+(e-s)/2;
    while(s <e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(vector<int>&array,int s,int e,int k){
int start =s;
    int end = e;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(array[mid]==k){
            return mid;
        }
        //go to right part
        if(array[mid]<k){
             start = mid+1;
           
        }else{//go to left part
             end = mid-1;
        }
        mid =start+(end-start)/2;
    }
    return -1;
}



#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
   int pv= pivot(arr,n);
    if(k>=arr[pv]&&k<=arr[n-1])
              {
        return binarysearch(arr,pv,n-1,k);
    }else{
        return binarysearch(arr,0,pv-1,k);
    }
}*/

//find square root using binary search
/*int root(int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end - start)/2;
    int ans =-1;
    while(start<=end){
        int square= mid*mid;
        if(square==n){
            return mid;
        }else if(square <n){
            ans =mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end - start)/2;
    }return ans;
}
double decimalvalue(int n,int sol, int decDigit ){

    double factor =1;
    double ans =sol;
//to make 1 to 0.1,0.01,0.001 
    for(int i=0;i<decDigit;i++){
        factor=factor/10;
//adding factor into sol till its square is less than entered number     
        for(double j=ans;j*j<n;j+=factor){
          ans = j; //if condition is true ans will updated to j
        }
    }
    return ans;
    
}
int main(){
    cout<<"enter the number for square root"<<endl ;
    int n;
    cin>>n;
    int sol= root(n);
   // cout<<"square root of entered no. is " << sol;
    cout<<decimalvalue(n,sol,3);
}*/

//book allocation problem
/*bool ispossible( int n, int m, vector<int> time,long long int mid){
   int chapter = 1;
   long long  int timesum=0;
    for(int i=0;i<m;i++){
        if(timesum+time[i]<=mid){
            timesum+=time[i];
        }else{
            chapter ++;
            if(chapter >n|| time[i]>mid){
                return false;
            }           
            timesum = time[i];
        }
    }
    return true;
}
#include <bits/stdc++.h> 
long long ayushGivesNinjatest( int n,  int m, vector<int> time) 
{long long int s=0;
 long long  int sum=0;
 for(int i=0;i<m;i++){
     sum+=time[i];
 }
 long long int e= sum;
 long long  int ans=-1;
  long long int mid=s+(e-s)/2;
 while(s<=e){
     if(ispossible(n,m,time,mid)){
         ans=mid;
         e=mid-1;
     }else{
         s=mid+1;
     }
     mid=s+(e-s)/2;
 }
 return ans;
}*/

//painters partition problem
/*bool thisAreaPossible(vector<int> &boards, int k,int mid){
    int painterCount =1;
    int area =0;
    for(int i=0;i<boards.size();i++){
        if(area + boards[i]<=mid){
            area += boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }
            area = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k){
    int start = 0;
 int sumofLength = 0;
 for(int i=0; i<boards.size();i++){
     sumofLength+=boards[i];
 }
 int end = sumofLength;
 int mid = start+(end-start)/2;
 int ans =-1;
 while(start<=end){
     if(thisAreaPossible(boards,k,mid)){
         ans=mid;
         end=mid-1;
     }
     else{
         start=mid+1;
     }
 mid = start+(end-start)/2;
 }
 return ans;
}*/

//aggresive cows problem
int main(){
    int maxi;
    int a[5]={4,2,1,3,6};
    for(int i=0;i<5;i++){
     maxi = max(maxi,a[i]);
    }
    cout<<maxi;
}
/*all good just checking for commit*/
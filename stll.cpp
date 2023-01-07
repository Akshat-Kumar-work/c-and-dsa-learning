#include<iostream>
#include<map>
using namespace std;
int main(){

/*vector<int>a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.pop_back();
for(int i=0;i<=a.size();i++){
    cout<<i<<endl;
}*/
/*priority_queue<int>maxi; //maximum heap
priority_queue<int,vector<int>,greater<int>>mini; //minimum heap

maxi.push(4);
maxi.push(2);
maxi.push(3);
maxi.push(1);

mini.push(4);
mini.push(2);
mini.push(1);
mini.push(3);

cout<<maxi.top()<<endl;
cout<<mini.top();*/

/*set<int>num;
num.insert(1);
num.insert(55);
num.insert(188);
num.insert(41);
num.insert(89);

for(auto i: num){
    cout<<i<<endl;
}*/

//map
map<int,string>m;
m[1]="akshat";
m[2]="uoouo";

for(auto i: m){
    cout<<i.first<<" "<<i.second<<endl;  
}
}




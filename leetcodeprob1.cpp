#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

/*int factorial(int n ){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;
}
int ncr (int n, int r){
  int ans = factorial(n)/(factorial(r)*factorial(n-r));
  return ans;
}
int main(){
    int n,r;
    cin>>n>>r;

    int sol = ncr(n,r);
   cout<<sol;
}*/

/*void counting (int n){
  for(int i=1;i<=10;i++){
    cout<<n*i<<endl;
  }
}
int main (){
  int n;
  cin>>n;
  counting(n);
}*/

int totalsetbit (int a , int b){
  int count=0;
  while(a!=0){if (a&1){
     count++;
     }a=a>>1;} while(b!=0){
  if(b&1){
   count++;
  }b=b>>1;}
  return count;
}int main(){
  int a,b;
  cin>>a>>b;

  int ans = totalsetbit(a,b);
  cout<<ans;
}
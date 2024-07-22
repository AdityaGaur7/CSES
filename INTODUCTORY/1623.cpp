#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define p(x) cout<<x<<" "

#define ip(a,n) for ( int i = 0; i< n; i++){cin>>a[i];}
#define ot(a,n) for ( int i = 0; i< n; i++){cout<<a[i]<<" ";}
#define sm(a) accumulate(a.begin(),a.end(),0)
#define mx(arr) *max_element(arr.begin(),arr.end())
#define mn(arr) *min_element(arr.begin(),arr.end())
#define F first
#define S second
#define rv(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007

#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){



}

int main(){
 int n;
 cin>>n;
 int a[n];
ip(a,n);
sort(a,a+n);
 int y = n/2;
 int x = n-y;
int s =0;
 int i=0,j=n-1;
 while(i<j && y/2){
     s+=a[i];
    
     s+=a[j];
    
     y--;
     j--;
 }
int d=0;
 while(i<j && x/2){
     d+=a[i];
    
     d+=a[j];
    
     y--;
     j--;
 }
 cout<<s<<" "<<d;


 }
// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vv(v)        vector<int>v
#define vvll(v)      vector<long long>v
#define vp(x)      v.push_back(x)
#define len(s)     (int)s.size()
#define mp(x,y)    make_ pair(x,y)
#define vpair      vector<pair<int,int>>vp
#define srt(a)    sort(a.begin(),a.end())
#define rev(a)     reverse(a.begin(),a.end())
#define r(i,a,b)   for ( int i = a; i< b; i++)
#define feach(a)   for(auto x: a)cout<<x<<" "
#define print(x)   cout<<x<<endl
#define tc         int t;cin>>t;while(t--)
#define maxi(arr)  *max_element(arr.begin(),arr.end())
#define mini(arr)  *min_element(arr.begin(),arr.end())
#define ll         long long 
#define mod        1000000007
#define lwr        transform(s.begin(), s.end(), s.begin(), ::tolower);
bool iss(const string& x, const string& s) {
    size_t pos = x.find(s);
    return pos != string::npos;
}


void solve(){
 int n;
 cin>>n;
 int arr[n];
 int k=0;
 if(n==1){
    cout<<1;
    return ;
 }
 else if(n==2 || n==3)
 {cout<<"NO SOLUTION";
 return;
 }

 vector<int>e,o,v;
 for(int i=1;i<=n;i++){
  
if(i%2==0)e.push_back(i);
else o.push_back(i);
  
 } 
 
 for(int i=0;i<e.size();i++){
    v.push_back(e[i]);
 }
 for(int i=0;i<o.size();i++){
    v.push_back(o[i]);
 }
  
//  reverse(v.begin(),v.end());

 for(auto x:v)cout<<x<<" ";

}


int main(){
   solve();
    return 0;
}

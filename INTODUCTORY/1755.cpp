#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){



}

int main(){
 string s;
 cin>>s;
 map<char,int>mp;
 for(int i=0;i<s.size();i++){
     mp[s[i]]++;
 }
 int cnt =0;
 char x ;
   for(auto it:mp){

  if(it.second%2==1){
     x = it.first;
     cnt++;
  }
   }
   if(cnt>1)
   {
    cout<<"NO SOLUTION\n";
    return 0;
   }
   string r ="";

for(auto it:mp){


  
        for(int i=0;i<it.second/2;i++){
            r+=it.first;
        }
    
  
   }
  string g = r;
  reverse(g.begin(),g.end());
  if(cnt>=1)
 r+=x;
 r+=g;
   cout<<r;



 return 0;
 }
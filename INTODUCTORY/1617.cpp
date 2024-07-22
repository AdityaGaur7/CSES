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
#define sort(a)    sort(a.begin(),a.end())
#define rev(a)     reverse(a.begin(),a.end())
#define r(i,a,b)   for ( int i = a; i< b; i++)
#define feach(a)   for(auto x: a)cout<<x<<" "
#define print(x)   cout<<x<<endl
#define tc         int t;cin>>t;while(t--)
#define maxi(arr)  *max_element(arr.begin(),arr.end())
#define mini(arr)  *min_element(arr.begin(),arr.end())
#define ll         long long 
#define mod        1000000007
#define cnt(s,x) count(s.begin(), s.end(),x)
#define lwr        transform(s.begin(), s.end(), s.begin(), ::tolower);

string multiply(const string& num1, const string& num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] += sum / 10;
        }
    }

    size_t start_pos = result.find_first_not_of('0');
    if (start_pos != string::npos) {
        return result.substr(start_pos);
    }
    return "0";
}

string factorial(int n) {
    string result = "1";
    for (int i = 2; i <= n; i++) {
        string num = to_string(i);
        result = multiply(result, num);
    }
    return result;
}

bool iss(const string& x, const string& s) {
    size_t pos = x.find(s);
    return pos != string::npos;
}

long long mypow(long long x, int n){
    long long ans = 1;
    long long nn = n;
    if(nn<0) nn = -1 *nn;
    while(nn){
        if(nn%2){
            ans = (ans *x )%mod;
            nn = nn -1;
        }else{
            x = (x*x)%mod;
            nn = nn/2;
        }
    }
    if(n<0)ans = (long long)(1.0) / (long long)(ans);
    return ans;
}




void solve(){
  
  ll n ;
 cin>>n;
 
 long long ans  =(long long)mypow(2,n) %mod ;
cout<<ans<<endl;  
  }

int main(){
   solve();
    return 0;
}

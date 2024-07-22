
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int n)
{
	ll sum = (n * (n+1))/2;
	if((sum/2)%2!=0)cout<<"NO\n";
	else { 

      int target = sum/2;
         vector<int>v,v1,v2;
		 for(int i = 0;i<n;i++){
v.push_back(i+1);
		 }
int sum = 0;

		 for(int i = 0;i<n;i++){
			if(sum<target){
				sum+=v[i];
			}else{
				
			}
		 }









	}
}


int main()
{
	int n = 100;
cin>>n;

		cout<< solve(n);
	return 0;
}

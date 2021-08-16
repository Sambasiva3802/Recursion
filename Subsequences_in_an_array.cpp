#include <bits/stdc++.h>
using namespace std;
void sub(int arr[],int n,vector<int>&v,int i,int sum,int k){
	if(i==n){
		if(sum%k==0&&v.size()!=0){
			for(int j=0;j<v.size();j++){
				cout<<v[j]<<" ";
			}
			cout<<endl;
	    }
		return ;
	}
	v.push_back(arr[i]);
	sum+=arr[i];
	sub(arr,n,v,i+1,sum,k);
	v.pop_back();
	sum-=arr[i];
	sub(arr,n,v,i+1,sum,k);
}
int main(){
	int arr[3]={2,4,3};
	vector<int>v;
	sub(arr,3,v,0,0,3);
}

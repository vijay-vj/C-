#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> v(n,0);
        for(int i=0; i<n; i++) cin>>v[i];
        int m=INT_MIN;
        cout<<"m: " <<m;
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            if(v[i]>m){
			st.push(v[i]);
			m=v[i];
			}
        }
        while(!st.empty()){
		cout<<st.top()<<" "; 
		st.pop();
		}
        cout<<endl;
    }
	return 0;
}

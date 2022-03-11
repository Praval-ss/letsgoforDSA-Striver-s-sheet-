#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> A;
    int n;cin>>n;

    for(int i=0;i<n;i++){
        int x;cin>>x;
    }


    // int n=A.size();
    vector<int> v(n+1,0);
    vector<int> sol;
    // sol.push_back(1);

    for(int i=0;i<n;i++){
        if(v[A[i]]==0 ){
            v[A[i]]++;
        }
        else sol.push_back(A[i]);
    }

    for(int i=1;i<n+1;i++){
        if(v[i]==0){
            sol.push_back(i);
        }
    }
    for(int i=0;i<2;i++){
        cout<<sol[i]<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

void dToB(int n){

    vector<int> v;

    while(n>0){
        int x=n%2;
        v.push_back(x);
        n/=2;
    }

    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];
    }
}

int main()
{
    int N;
    cin>>N;

    dToB(N);

    return 0;
}

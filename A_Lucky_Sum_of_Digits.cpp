#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int n,m;
    cin>>n;
    m=0;
    while(n>=0){
        if(n%7==0){
            puts((string(m,'4')+string(n/7,'7')).c_str());
            return 0;
        }
        m++;
        n-=4;
    }
    cout<<-1<<"\n";
    return 0;
}
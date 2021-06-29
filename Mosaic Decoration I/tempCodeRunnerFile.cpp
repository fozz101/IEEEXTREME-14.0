#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cb,cp;
    int bi=0;
    int pi=0;
    int bbi=0;
    int ppi=0;
    int nb=0;int np=0;
    cin>>n>>cb>>cp;
    for (int i=0; i<n;i++){
        cin>>bi>>pi;
        bbi+=bi;
        ppi+=pi;
    }
    
    if (bbi%10!=0){
        nb=bbi/10+1;
    }
    else{
        nb=bbi/10;
    }
    if (ppi%10!=0){
        np=ppi/10+1;
    }
    else{
        nb=ppi/10;
    }
    cout << nb*cb+np*cp;


    return 0;
}
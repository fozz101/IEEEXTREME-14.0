#include <bits/stdc++.h>

using namespace std;

int main(){
    long long C=0,N=0,P=0,W=0;

    cin>>C>>N>>P>>W;
    long long pocket[N];
    long long nbreTable=0,result=0;
    long long place=0;
    long long n=0;
    if (W%P!=0){
        pocket[0]=W%P;
        for (long long i=1;i<W/P+1;i++){
            pocket[i]=P;
        }
        if (W/P+1<N){
            for (long long i=W/P+1;i<N;i++){
            pocket[i]=0;
            }
        }
    }else{
        for (long long i=0;i<W/P;i++){
            pocket[i]=P;
        }
        if (W/P<N){
            for (long long i=W/P;i<N;i++){
            pocket[i]=0;
            }
        }
    }
    n = sizeof(pocket)/sizeof(pocket[0]); 
    sort(pocket, pocket+n); 
    // //affichage pocket
    //  for (long long i=0;i<N;i++){
    //         cout<<pocket[i];
    //     }

    // cout<<endl;
    // //end affichage
    for (long long i=0;i<N;i++){
        if (pocket[i]==0){
            place++;
            continue;
        }
        result+=pocket[i];
        

        if(result>=C){
            pocket[i]=result-C;
            result=pocket[i];
            nbreTable++;
            place--;
        }
        else{
            pocket[i]=0;
            place++;
        }
        if(place < 0){
            break;
        }
    }
    cout<<nbreTable;


    return 0;
}
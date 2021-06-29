#include <bits/stdc++.h>

using namespace std;

int main(){
    int T=0;
    cin>>T;
    for (int i=0;i<T;i++){
        //1 test case
        long M=0,N=0,K=0;
        long nWc=0;
        long n=0; 
        long finalNbre=0;
        long x=0;
        cin>>M>>N>>K;
        long TABnwc[M];

        for( long j=0;j<M;j++){
            cin>>nWc; //nwc: nbre correctly wired room per floor
            TABnwc[j]=nWc;
        }
        n = sizeof(TABnwc)/sizeof(TABnwc[0]);
        sort(TABnwc,TABnwc+n);
        if(K<M){   
                while(K--){
                    for(long j=0;j<M;j++){
                        finalNbre+= N-TABnwc[j];
                        x=j+1;
                    }
                }
                for(long  j=x;j<M;j++){
                        finalNbre+=TABnwc[j];
                    }
        }
        else{
             while(K--){
                    for(long j=0;j<M;j++){
                        finalNbre+= N-TABnwc[j];
                        x=j+1;
                    }
                }
        }

        cout<<finalNbre<<endl;

    }
    return 0;
}
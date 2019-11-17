#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, p, q;
    cin>>x;
    while(x--){
        int a, b, c, d, i, j;
        cin>>a>>b>>c>>d;
        for(i=0; i<= a*(c+1); i++){
                //cout<<i<<endl;
                for(j=0; j<= b*(d+1); j++){
                        p = i%(c+1);
                        q = j%(d+1);
                    if(p==0 || q==0)
                        cout<<"*";
                    else //if((i%3)!=0|| (i%3)!=1 || (j%3)!=1 || (j%=3)!=0 )
                        cout<<".";
                    //cout<<j<<" ";
                }
        cout<<endl;
        }
    }
}

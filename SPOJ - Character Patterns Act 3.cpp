#include<bits/stdc++.h>

using namespace std;
int main(){
    int x, p, q;
    cin>>x;
    while(x--){
        int a, b, i, j;
        cin>>a>>b;
        for(i=0; i<(3*a+1); i++){
                //cout<<i<<endl;
                for(j=0; j<(3*b+1); j++){
                        p = i%3;
                        q = j%3;
                    if(p==0)
                        cout<<"*";
                    else if (q==0)
                        cout<<"*";
                    else //if((i%3)!=0|| (i%3)!=1 || (j%3)!=1 || (j%=3)!=0 )
                        cout<<".";
                    //cout<<j<<" ";
                }
        cout<<endl;
        }
    }
}

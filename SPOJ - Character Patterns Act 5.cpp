#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, p, q;
    cin>>x;
    while(x--){
        int a, b, c, m, n, x;
        cin>>a>>b>>c;
        for(int i=0; i<=a*(c+1); i++){
            for(int j=0; j<=b*(c+1); j++){
                p = j%(c+1);
                q = i%(c+1);
                m = j%(2*c + 2);
                n = i%(2*c + 2);
                if(p==0 || q==0)
                    cout<<"*";
                else if (m==n)
                    cout<<"\\";
                else if ((i+j)%(2*c+2)==0)
                    cout<<"/";
                else
                    cout<<".";
            }
            cout<<endl;
        }
    }
}

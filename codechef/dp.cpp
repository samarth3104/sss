#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int ar[n],de[n];
    pair<int,int > p[n];
    int pl[n];
    memset(pl,-1,sizeof(pl));
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>de[i];
        p[i]=make_pair(ar[i],de[i]);
    }
    sort(p,p+n);
    int max=0;
    for(int i=0;i<n;i++){
        int f=0;
        int j=0;
        while(f==0&&j<n){
            if(ar[i]>pl[j]){
                pl[j]=-1;
            }
            if(pl[j]==-1){
                pl[j]=de[i];
                if(j+1>max){
                    max=j+1;
                }
                break;
            }
            j++;
        }
    }
    cout<<max<<endl;

}

#include<bits/stdc++.h>
using namespace std;
// Searching in sorted rotated array in time log(n) in one pass
int srch(int arr[],int key,int l,int h){

    int mid=(l+h)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid+1]<arr[h]){//If the second half is sorted
        if(key>=arr[mid+1]&&key<=arr[h]){//Key lies in second half
            return srch(arr,key,mid+1,h);
        }
        else{//Key lies in first half
            return srch(arr,key,l,mid-1);
        }
    }
    else{//If the first half is sorted
        if(key>=arr[l]&&key<=arr[mid-1]){//Key lies in first half
            return srch(arr,key,l,mid-1);
        }
        else{//Key lies in second half
            return srch(arr,key,mid+1,h);
        }
    }

}
int main(){

    int arr[]={15,20,22,25,3,5,6,9,12};
    int ans=srch(arr,25,0,8);
    cout<<ans<<endl;

}

#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the target";
    cin>>target;
    cout<<"enter the number of elements of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int p=0;p<n;p++){
    for(int j=p+1;j<n;j++){
        if(arr[p] + arr[j]==target){
        cout<<p<<"and"<<j<<endl;
    }
}
}
    return 0;
}
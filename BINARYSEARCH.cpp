#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int si=0;
    int ei=n-1;
    int mid;
    while(ei>=si)
    {
    mid=(si+ei)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        si=mid+1;
    }
    else if(arr[mid]>x)
    {
        ei=mid-1;
    }
    else
    {
        cout<<"no";
    }
    }
}
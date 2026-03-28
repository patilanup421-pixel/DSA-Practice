#include<iostream>
using namespace std;

int peakElement(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"Peak element found at index "<<mid<<" which is "<<arr[mid];
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[7]={0,1,5,9,7,4,2};
    int size=7;
    peakElement(arr,size);
    return 0;
}
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else if(target==arr[mid]){
            cout<<"Target found at "<<mid+1<<position;
            break;
        }
    }
    return 0;
}

int main(){
    int arr[]={2,4,7,10,15,19,21};
    int target=7;
    int size=7;
    binarySearch(arr, size, target);
    return 0;
}
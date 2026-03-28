#include<iostream>
using namespace std;

int findFirstOcc(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int index;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            index=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else
        start=mid+1;
    }
    cout<<"The first occarance of the element is at index: "<<index;
    return 0;
}

int main(){
    int arr[]={2,4,4,4,5,6,8,10};
    int size=8;
    int target=4;
    findFirstOcc(arr,size,target);
    return 0;
}
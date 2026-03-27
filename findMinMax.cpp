#include<iostream>
#include<climits>
using namespace std;

void findMinMax(int arr[][3],int rows,int cols){
    int maxi=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
            else if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<maxi<<endl;
    cout<<min<<endl;
}

int main(){
    int arr[3][3]={{1,6,-2},{4,8,9},{-5,4,7}};
    int rows=3;
    int cols=3;
    findMinMax(arr,rows,cols);
    return 0;
}


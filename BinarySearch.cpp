#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int left = 0, right = n-1;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]<target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int printResult(int result){
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    } else {
        cout<<"Element not found."<<endl;
    }
}

int main(){
    int arr[] = {2,4,10,18,23,25,35,47};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, n, target);
    printResult(result);
    return 0;
}

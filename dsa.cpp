#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == target){
            return mid;   // element found
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;  
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements (sorted): "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    int result = binarySearch(arr, target);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
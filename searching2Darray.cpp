// PROBLEM : Leet Code (74 Search in a 2D array and find the target value if the target value is present then return true else false.
// LOGIC : Simply just traverse through each element in the 2D array and compare it with the target value if the target is found return true and if target is not found i=even after
// checking each elment return false .
// TIME COMPLEXITY : O( log m*n
// CODE:
#include<iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    cout<<"Enter number of rows :"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns :"<<endl;
    cin>>cols;
    int arr[rows][cols];
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    bool found = false;
    int target;
    cout<<"Enter the target :"<<endl;
    cin>>target;
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            if(arr[i][j] == target){
                cout<<"True"<<endl;
                found = true;
                break;
            }   
        }
    if (found) break;
    }
    if(!found){
        cout<<"False";
    }
    return 0;
}

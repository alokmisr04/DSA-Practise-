// PROBLEM : Leet Code Problem Number : 4 In this problem we have to find median of two sorted array
// LOGIC : In this program we first created two array taking user input and then we stored array one by  one in the anotherr array result .We sorted the both array
// using sort() function . And then we caluculated the median of the final result using the formula 
// TIME COMPLEXITY :O( log (m+n))
// CODE :
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a1;
    vector<int> a2;
    int n1,n2;
    cout<<"Enter the size of array 1:"<<endl;
    cin>>n1;
    cout<<"Enter the size of array 2:"<<endl;
    cin>>n2;
    a1.resize(n1);
    a2.resize(n2);
    for(int i =0; i<n1; i++){
        cin>>a1[i];
    }
    for(int i =0; i<n2; i++){
        cin>>a2[i];
    }
    vector<int> result;
    result.insert(result.end(), a1.begin(), a1.end());
    result.insert(result.end(), a2.begin(), a2.end());
    sort(result.begin(), result.end());
    for(int x : result) cout << x << " ";
    cout<<endl;
    // MEDIAN
   double med;
   int n = result.size();
   if(n % 2 == 0){
      med = (result[n/2 - 1] + result[n/2]) / 2.0;
   }
   else{
      med = result[n/2];
   }
   cout << "Median: " << med << endl;
   return 0;
}

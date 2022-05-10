/******************************************************************************
Input:
array = [1,2,3,4,5,6,7,8,9,15]
Sum = 18
Output:
[ [1,2,15],
  [1,8,9],
  [2,7,9],
  [3,6,9],
  [3,7,8],
  [4,6,8],
  [5,6,7] ]

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
    vector<vector<int>> result;
    int sum=18,i,j,k,n,currentsum=0;
    sort(arr.begin(),arr.end());
    n=arr.size();
    for(i=0;i<n-2;i++)
    {
        j=i+1;
        k=n-1;
        while(j<k)
        {
            currentsum=arr[i]+arr[j]+arr[k];
            if(currentsum==sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(currentsum>sum){
                k--;
            }
            else if(currentsum<sum){
                j++;
            }
        }
    }
    for(i=0;i<result.size();i++){
        for(int j: result[i]){
            cout<<j<<",";
        }
        cout<<endl;
    }

    return 0;
}

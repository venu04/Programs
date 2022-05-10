/******************************************************************************

Input: arr={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4
Output: 9

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j,k,cnt=0,largest=0;
    vector<int> arr={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int n=arr.size();
    for(int i=1;i<=n-2;)
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
        {
            j=i;
            cnt=1;
            while(j>=1 and arr[j]>arr[j-1])
            {
                j--;
                cnt++;
            }
            k=i;
            while(i<=n-2 and arr[i]>arr[i+1]){
                i++;
                cnt++;
            }
            largest=max(largest,cnt);
        }
        else{
            i++;
        }
    }
    cout<<largest;

    return 0;
}

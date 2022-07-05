/******************************************************************************

Input: arr={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4
Output: 9

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int a[]={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int j,count,largest=-9999;
    int n=(sizeof(a)/sizeof(a[1]))-1;
    while(i<n-1){
        count=1;
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            j=i;
            while(j>0 and a[j]>a[j-1]){
                count++;
                j--;
            }
            while(i<n-1 and a[i]>a[i+1]){
                count++;
                i++;
            }
        }
        else
        {
            i++;
        }
        if(largest<count){
            largest=count;
        }
    }
    cout<<largest;

    return 0;
}


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

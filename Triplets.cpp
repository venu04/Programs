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

using namespace std;

int a[]={2,3,1,5,4,7,6,15,9,8};
int b[sizeof(a)/sizeof(a[1])];

void merge(int s,int m,int e){
    int i=s;
    int j=m+1;
    int k=s;
    while(i<=m && j<=e){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=m)
    {
        b[k++]=a[i++];
    }
    while(j<=e){
        b[k++]=a[j++];
    }
    for(i=s;i<k;i++)
    {
        a[i]=b[i];
    }
}

void mergesort(int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e){
        return;
    }
    mergesort(s,mid);
    mergesort(mid+1,e);
    merge(s,mid,e);
}

int main()
{
    int i;
    mergesort(0,(sizeof(a)/sizeof(a[1])-1));
    for(i=0;i<sizeof(a)/sizeof(a[1]);i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int sum=18;
    int n=sizeof(a)/sizeof(a[1]);
    for(i=0;i<n-3;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k){
            int curr_sum=a[i]+a[j]+a[k];
            if(curr_sum==sum){
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";
                i++;
            }
            else if(curr_sum>sum){
                k--;
            }
            else
            {
                j++;
            }
            
        }
    }
    return 0;
}


/*******************************************************************************/
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

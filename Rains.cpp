/******************************************************************************

input
a=[0,1,0,2,1,0,3,1,0,1,2]
output
8
Explanation
array contains the blocks and we need to find how much water can store in between the blocks

find the left side max
find the righ side max
[0,1,0,2,1,0,3,1,0,1,2]
[0,1,1,2,2,2,3,3,3,3,3]
[3,3,3,3,3,3,3,2,2,2,2]
[(0,3)-0]
[0,0,1,0,1,2,0,1,2,1,0]
min(left,rigt)-current_position

*******************************************************************************/

#include <iostream>

using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int main()
{
    int a[]={0,1,0,2,1,0,3,1,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int left[n-1];
    int right[n-1];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],a[i]);
        right[n-i-1]=max(right[n-i],a[n-i-1]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        water=water+min(left[i],right[i])-a[i];
    }
    cout<<water;
    return 0;
}

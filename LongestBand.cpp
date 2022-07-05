input [1,9,3,0,18,5,2,4,10,7,12,6]
output 8
explanation 
subset [0,1,2,3,4,5,6,7]
[9,10]
[12]
[18]
longest subset [0,1,2,3,4,5,6,7]


#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int a[]={1,9,3,0,18,5,2,4,10,7,12,6};
    int count,n=sizeof(a)/sizeof(a[1]);
    int i,largest=-9999;
    unordered_set<int> s;
    
    for(i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(i=0;i<n;i++)
    {
        int parent=a[i]-1;
        if(s.find(parent)==s.end()){
            count=1;
            int nextno=a[i]+1;
            while(s.find(nextno)!=s.end()){
                count++;
                nextno++;
            }
            if(largest<count){
                largest=count;
            }
        }
    }
    cout<<largest;
    return 0;
}

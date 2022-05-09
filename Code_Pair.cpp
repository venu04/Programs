/*
input:
array=[10,5,2,3,-6,9,11]
sum=4
output:
[10,6]
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    
    vector<int> arr={10,5,2,3,-6,9,1};
    vector<int> result;
    unordered_set<int> s;
    int sum=4,x,i;
    for(i=0;i<arr.size();i++)
    {
        x=sum-arr[i];
        if(s.find(x)!=s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            break;
        }
        s.insert(arr[i]);
    }
    if(result.size()!=0)
            cout<<result[0]<<","<<result[1];
    else
        cout<<"No such Pair";
    return 0;
}

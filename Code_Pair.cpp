/*
input:
array=[10,5,2,3,-6,9,11]
sum=4
output:
[10,6]
*/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
int main(){
    vector <int> arr={10,5,2,3,-6,9,11};
    vector <int> result;
    unordered_set <int> s;
    char ch;
    int i;
    cout<<"Enter Array \n";
    ch=getchar();
    while(ch!='\n'){
        arr.push_back(ch-'0');
        ch=getchar();
    }
    cout<<"Enter sum \n";
    int sum;
    cin>>sum;
    for(i=0;i<arr.size();i++){
        int x=sum-arr[i];
        if(s.find(x)!=s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            break;
        }
        s.insert(arr[i]);
    }
    cout<<"{"<<result[0]<<","<<result[1]<<"}";
    return 0;
    
}

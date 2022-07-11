/******************************************************************************

input
plots=[1,3,2,1,4,1,3,2,1,1]
k=8
output
2-5
4-6
5-9

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int plots[]={1,3,2,1,4,1,3,2,1,1};
    int n=sizeof(plots)/sizeof(int);
    int k=8,i=0,j=0,cs=0;
    while(j<n){
        cs=cs+plots[j];
        j++;
        while(cs>k and i<j){
            cs=cs-plots[i];
            i++;
        }
        if(cs==k){
            cout<<i<<"-"<<j-1<<endl;
        }
    }

    return 0;
}

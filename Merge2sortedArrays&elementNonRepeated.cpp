input
arr1=[2,3,3,4,5,7,9];
arr2=[1,2,4,5,7,7,9];
output
arr3=[1,2,3,4,5,7,9]
#include <iostream>

using namespace std;

int main()
{
    int arr1[]={2,3,3,4,5,7,9};
    int arr2[]={1,2,4,5,7,7,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr3[n3];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        while(arr1[i]<=arr2[j]){
            if(k==0 || arr3[k-1]!=arr1[i]){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
            else{
                i++;
            }
        }
         while(arr2[j]<=arr1[i]){
            if(k==0 || arr3[k-1]!=arr2[j]){
                arr3[k]=arr2[j];
                k++;
                j++;
            }
            else{
                j++;
            }
        }
        
        
    }
    for(i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a=15;
    if((a&(a-1))==0){
        cout<<"2 power";
    }
    else
    {
        cout<<"Not a 2 power";
    }

    return 0;
}

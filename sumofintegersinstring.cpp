
input
-1bc20fg-10
output
9
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    int num=0,neg=0;
    for(int i=0;i<s.length();i++){
        num=0;
        char c=s[i];
        int x=i;
        while(s[i]>='0' && s[i]<='9'){
            num=num*10+s[i]-'0';
            i++;
        }
        if(x!=0 && s[x-1]=='-')
        {
        num=0-num;
        neg=0;
        }
        if(num!=0 || s[i-1]>='0' && s[i-1]<='9')
        count=count+num;
    }
    cout<<count;
    

    return 0;
}

#include<iostream>

using namespace std;

int main(){

    string str;

    int n;

    cin>>n>>str;

    for(int i=0;i<str.size();i++){

       char temp=str[i]-'0'+48+n;   //将字母顺移n位

       if(temp>'z'){temp=temp-'z'+'a'-1;}  //超过"z"的部分，重新从a数起

       cout<<temp;

    }

    return 0;
}

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void btd(string s){
    string ist[]={"0","1","2","3","4","5","6","7","8","9","+","-","*","/"};
    string a=s;
int l=s.length();
if(l%4 !=0){
    cout<<"invalid";
}
else{
    for(int i=0;i<l;i+=4){
       string temp=a.substr(i,4);
        int temp1=stoi(temp,0,2);
        string p=ist[temp1];
        if( p=="+" || p=="-" || p=="*" ||p=="/" ){
            cout<<p;
        }
        else{
            cout<<p;
        }
    }
    cout<<endl;
}
}

int main()
{
    cout << "Hello world!" << endl;
    string s;
     cout << "enter string";
    cin>>s;
    btd(s);
    return 0;
}

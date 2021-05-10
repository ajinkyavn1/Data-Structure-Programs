#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    stack<char> s;
    int i=0;
    cin>>str;
    while(i<str.length())
    {
        if(str[i]=='{'||str[i]=='('||str[i]=='[')
        {
            s.push(str[i]);
        }
        switch (str[i])
        {
            case '}':
                        if(s.top()==')'||s.top()==']')
                           break;  
                            else
                                s.pop();
                break;
          case ']':
                        if(s.top()==')'||s.top()=='}')
                              break;   
                            else
                                s.pop();
                break;
          case ')':
                        if(s.top()=='}'||s.top()==']')
                              break;     
                            else
                                s.pop();
                break;
        
         } 
         i++;
    }
    if(s.empty())
            cout<<"PASS";
        else
            cout<<"FAIL";
    return 0;
}
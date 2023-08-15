#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

string isBalanced(string s) {
    
    stack<char> st;
    for(auto it:s)
    {
        switch(it)
        {
            case '{':
            case '(':
            case '[': st.push(it);
                      break;
            case ')': if(!st.empty() and st.top()=='(')
                      st.pop();
                      else
                      return "NO";
                      break;
                      
            case '}': if(!st.empty() and st.top()=='{')
                      st.pop();
                      else
                      return "NO";
                      break;
                      
            case ']': if(!st.empty() and st.top()=='[')
                      st.pop();
                      else
                      return "NO";
                      break;
        }
    }
    
    if(st.empty())
    return "YES";
    else
    return "NO";
}

int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    
    return 0;
}
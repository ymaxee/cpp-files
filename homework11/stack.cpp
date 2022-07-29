#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> s;
    string a;
    int len;
    cin>>a;
    len = a.length();
    char p, temp;
    for(int i = 0;i<len;i++){
        p = a[i];
        if(p == '{' || p=='[' || p=='('){
            s.push(a[i]);
            
        }else if(p=='}'||p==']'||p==')'){
            temp = s.top();
            s.pop();
            if(temp == '{'&&p=='}'){
                continue;
            }else if(temp == '['&&p==']'){
                continue;
            }else if(temp == '('&&p==')'){
                continue;

            }else{
            cout<<"NO";
            return 0;
            }
        }
    }
        cout<<"YES";
        return 0;
    
} 

#include <iostream>
#include <stack>
using namespace std;

int main() {

  stack<int> s;
  int one, two, three;
  int nums, score, int1;
  cin>>nums;    
  char curr;
  for(int i = 0;i<nums;i++){
    cin>>curr;
    if (curr<='9'&&curr>='0'){
        curr = curr - '0';
        s.push(curr);
    }else if(curr =='+'){
        one = s.top();
        s.pop();
        two = s.top();
        s.pop();
        three = one+two;
        s.push(one);
        s.push(two);
        s.push(three);
    }else if(curr == 'D'){
        int1 = s.top();
        int1 = int1*2;
        s.push(int1);
    }else if(curr == 'C'){
        s.pop();
    }
  }
  while(!(s.empty())){
    int1 = s.top();
    s.pop();
    score+=int1;

  }
  cout<<score;
}

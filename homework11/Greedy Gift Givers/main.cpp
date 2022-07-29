/*
ID: maxlove1
LANG: C++
TASK: gift1
*/
#include <iostream>
using namespace std;
int main() {
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    int np;
    string name;
    cin>>np;
    int amount, number, left, each;
    int bank[np];
    for(int i = 0;i<np;i++){bank[i] = 0;}
    string people[np];
    for(int i = 0;i<np;i++){
        cin>>people[np];
    }
    while(true){
        int i;
        cin>>name;
        for(i = 0;i<np;i++){
            if(name == people[np]){
                break;
            }
        }
        cin>>amount;
        bank[i] = bank[i] - amount;
        cin>>number;
        if(number == 0){
            break;
        }
        left = amount%number;
        amount = amount - left;
        bank[i] = bank[i] + left;
        each = amount/number;
        for(int j = 0;j<number;j++){
            int k;
            cin>>name;
            for(k = 0;k<np;k++){
            if(name == people[np]){
                break;
                }
            }
            bank[k] = bank[k] + each;

        }
    }
    for(int a = 0;a<np;a++){
        cout<<people[a]<<" "<<bank[a];
        if((a+1)<np){
            cout<<"\n";
        }
    }

}
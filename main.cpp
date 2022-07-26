#include <iostream>

using namespace std;

int n;
bool comp(int a[][11], int b[][11]){
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
              return false;
            }
        }
    }
    return true;
}
void rotate90(int a[][11], int b[][11]){
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            b[j][n-i-1]=a[i][j];
        }
    }
}
void reflection(int a[][11], int b[][11]){
    int f = (n-(n%2))/2;
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][n-1]=a[i][j];
        }
    }
}


int main(){
  cin>>n;
  int list1[11][11], list2[11][11], list3[11][11], list4[11][11];
  for (int i = 0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>list1[i][j];
      }
  }
  for (int i = 0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>list2[i][j];
      }
  }
  
  rotate90(list1, list3);
  if(comp(list2, list3)){
    cout<<1;
    return 0;
  }else{
    rotate90(list3, list4);
    if(comp(list2, list4)){
        cout<<2;
        return 0;
    }else{
        rotate90(list4, list3);
        if(comp(list3, list2)){
            cout<<3;
        }else{

        }
    }
  }
} 
  
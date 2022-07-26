#include <iostream>

using namespace std;

int n;
bool comp(char a[][11], char b[][11]){
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
              return false;
            }
        }
    }
    return true;
}
void rotate90(char a[][11], char b[][11]){
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            b[j][n-i-1]=a[i][j];
        }
    }
}
void reflection(char a[][11], char b[][11]){
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    int start;
    int end;
    for(int i = 0;i<n;i++){
        start = 0;
        end = n-1;
        while (start < end){
            int temp = b[i][start];
            b[i][start] = b[i][end];
            b[i][end] = temp;
            start++;
            end--;
        }
        
    }
}



int main(){
  cin>>n;
  char list1[11][11], list2[11][11], list3[11][11], list4[11][11];
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
            reflection(list1, list4);
            if(comp(list4, list2)){
                cout<<4;
                return 0;
            }else{
                rotate90(list4, list3);
                if(comp(list3, list2)){
                    cout<<5;
                    return 0;
                }else{
                    rotate90(list3, list4);
                    if(comp(list4, list2)){
                        cout<<5;
                        return 0;
                    }else{
                        rotate90(list3, list4);
                        if(comp(list4, list2)){
                            cout<<5;
                            return 0;
                        }else{
                            if(comp(list1, list2)){
                                cout<<6;
                                return 0;
                            }else{
                                cout<<7;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
  }
} 

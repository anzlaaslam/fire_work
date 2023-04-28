#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main() {
 int n = 11, chk = 0;
 if (n % 2 == 0) {
  n = n + 1;
 }

 for (int h = 0; h < n; h++) {
  
   system("CLS");
  for (int i = 0; i < n; i++) {


   //for upper flower
   for (int j = 0, k = n - 1; j < n; j++, k--) {
    if (j == i || k == i || j == (n / 2) || i == (n / 2)) {
     if (chk == 1) {
      cout << "* ";
     }
    }
    else {
     cout << " ";
    }
   }
   cout << endl;


   //for lower line
   if (i == n - 1) {
    for (int l = 0; l < n; l++) {
     for (int m = 0; m < n; m++) {
      if (m == (n / 2)) {
       if (l >= n - h - 1) {
        cout << "*";
       }
      }
      else {
       cout << " ";
      }
     }
     cout << endl;
     if (h == n - 2) {
      chk = 1;
     }
    }
   }


  }
  Sleep(500);


 }
 return 0;
}
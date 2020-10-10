#include <iostream>
using namespace std;
bool CheckPrime(int num);

int main(int argc){
   int num;
   bool flag;
   flag = CheckPrime(argc);
    if (flag==true)
      cout<<argc<<" is a prime number";
   else
      cout<<argc<<" is not a prime number";
   return 0;
}

bool CheckPrime(int argc){
    bool flag=true;
    for(int i = 2; i <= argc / 2; i++) {
       if(argc % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

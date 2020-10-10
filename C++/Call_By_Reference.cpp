#include <iostream>
using namespace std;

//Function to Interchange value
int intrchange(int &n1, int &n2){
    int res;
    res = n1;
    n1 = n2;
    n2 = res;
}

int main(){
    int x, y;
    cout << "Enter 1st Number : ";
    cin >> x;
    cout << "Enter 2nd Number : ";
    cin >> y;

    cout << "\n\nBefore Interchange\n" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    intrchange(x,y);//Function Call

    cout << "\n\nAfter Interchange\n" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

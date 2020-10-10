#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
   int i,n;
   cout<<"Enter size of the array : ";
   cin>>n;
   int *a = new int(n);
   cout<<"\nEnter "<<n<<" elements :"<<endl;
   for(i = 0;i<n;i++) {
      cin>>a[i];
   }

   insertionSort(a, n);//Function Call

   cout<<"\nSorted elements are: ";
   for(i = 0;i<n;i++) {
      cout<<a[i]<<" ";
   }
   cout<<endl;
   return 0;
}

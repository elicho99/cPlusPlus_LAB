#include<iostream>
using namespace std;

int size_of_ar;
void my_sorter(int my_array[],bool order);



int main() {

cout<<"Enter the size of your array"<<endl;
    cin>>size_of_ar;
int arrayy[size_of_ar];

 cout<<"Enter "<<size_of_ar<<" integers that you desire"<<endl;
    for(int i=0; i<size_of_ar; i++)
    {
        cin>>arrayy[i];
    }
    int ord;
    cout<<"Enter 0 for ascending order and 1 for descending"<<endl;
     cin>>ord;
   my_sorter(arrayy,ord);
  cout<<"\nSorted array is: \n";
   for (int i = 0; i < size_of_ar; i++)
   cout<< arrayy[i] <<" ";
   return 0;
}


void my_sorter(int a[],bool order )// This sorter kind is selection sort .
{
    int n = size_of_ar;
    if (order==0)
    {


   int i, j, min_, temp;
   for (i = 0; i < n - 1; i++) {
      min_ = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min_])
            min_ = j;
      temp = a[i];
      a[i] = a[min_];
      a[min_] = temp;
   }
    }else{

    int i, j, max_, temp;
   for (i = 0; i < n - 1; i++) {
      max_ = i;
      for (j = i + 1; j < n; j++)
         if (a[j] > a[max_])
            max_ = j;
      temp = a[i];
      a[i] = a[max_];
      a[max_] = temp;


    }
    }
}

#include <iostream>
using namespace std;


int size_of_ar; // The size of our array
// The function prototype
int func_one(int numbers[]);

int main()
{

    cout<<"Enter the size of your array"<<endl;
    cin>>size_of_ar;


    int arrayy[size_of_ar],diff; // our array 


    cout<<"Enter "<<size_of_ar<<" integers that you desire"<<endl;
    for(int i=0; i<size_of_ar; i++)
    {
        cin>>arrayy[i];
    }

    diff = func_one(arrayy);
    
    cout<<"\n Difference is : "<<diff;
}

int func_one(int numbers[])
{
    int x = 0,y = 0, diff;
    for (int i=0; i<size_of_ar; i++)
    {
        if (numbers[i]%2 == 0)
        {
            // sum of evens
            y +=numbers[i];
        }
        else
        {
            // sum of odds
            x += numbers[i];
        }
    }
    diff = x - y;

    return diff;
}













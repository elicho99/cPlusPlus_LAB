



#include <iostream>

using namespace std;



int** getarray();

void add_arr(int** arr1,int** arr2);

void sum_arr(int** arr1,int** arr2);
int** mul_arr(int** arr1,int** arr2);
void print_arr(int** arr);

void transpose_arr(int** arr);

int main()
{
    cout << "Hello world!" << endl;

    /*int ar[]={2,3,45,4};
int *ipt=ar ;

cout<< ipt[0] <<" "<< *(ipt+2) ; //work fine
*/
    /*
    int (*a)[3] = create_matrix();

     for (int i=0; i<4;i++)
        {
        for(int j=0;j<3;j++)
            {
             cout<< (a[j][i])<<" ";
            }
            cout<<"\n";
        }

*/

int **a,**b,**c,**d;
d=getarray();
a = getarray();
b = getarray();
int choice;

cout<<"\t\t1.TO create"<<endl;
cout<<"\t\t2.TO Display"<<endl;
cout<<"\t\t3.TO ADD MATRIX"<<endl;
	cout<<"\t\t4.TO subtract MATRIX"<<endl;
	cout<<"\t\t5.TO multiply with each other"<<endl;
	cout<<"\t\t6.TO multiply by scalar"<<endl;
	cout<<"\t\t7.TO FIND THE TRANSPONSE OF THE MATRIX"<<endl;
	cout<<"\t\t8.TO exit "<<endl<<endl;

  	cout<<"please enter your choice"<<endl;
       cin>>choice;
switch(choice)
   {
   	case 1:
   	add();
   	break;
   	case 2:
   	sub();
   	break;
   	case 3:
   	mul();
   	break;
   case 4:
   	disp3();
   	break;
   case 5:
   	transponse();
   	break;
   case 6:
   	cout<<"thank you for using. Good bye"<<endl;
   	break;
   }



print_arr(a);
print_arr(b);

print_arr(d);


add_arr(a,d);
sum_arr(a,b);

transpose_arr(a);
c=mul_arr(a,b);
print_arr(c);
    return 0;
}





int** getarray()
{
    int** arr = new int*[3];
    for (int i=0; i<3;i++)
        {
            arr[i]=new int[3];
        for(int j=0;j<3;j++)
            {
                int x;
                cin>>x;
            arr[i][j] =x;
            }
            }

return arr;
}

void print_arr(int** arr)
{
    cout<<"************* \n";
    for (int i=0; i<3;i++)
        {
        for(int j=0;j<3;j++)
            {
             cout<< (arr[i][j])<<" ";
            }
            cout<<"\n";
        }

         cout<<"************* \n";
}

void add_arr(int** arr1,int** arr2)
{

    cout<<"The sum of the two arrays is \n";
   int c[3][3];

     for (int i=0; i<3;i++)
        {
        for(int j=0;j<3;j++)
            {
                c[i][j]=arr1[i][j]+ arr2[i][j];
             cout<< c[i][j]<<" ";
            }
            cout<<"\n";
        }

}


void sum_arr(int** arr1,int** arr2)
{

    cout<<"The difference of the two arrays is \n";
   int c[3][3];

     for (int i=0; i<3;i++)
        {
        for(int j=0;j<3;j++)
            {
                c[i][j]=arr1[i][j] - arr2[i][j];
             cout<< c[i][j]<<" ";
            }
            cout<<"\n";
        }

}


void transpose_arr(int** arr)
{
     cout<<"*******Transpose****** \n";
    for (int i=0; i<3;i++)
        {
        for(int j=0;j<3;j++)
            {
             cout<< (arr[j][i])<<" ";
            }
            cout<<"\n";
        }

         cout<<"************* \n";
}


int** mul_arr(int** arr1,int** arr2)
{
      cout<<"in multiplying of matrix the order must match \n";

     int** c = new int*[3];


        for (int i=0; i<3;i++)
        {
            c[i]=new int[3];

        for(int j=0;j<3;j++)
            {
                 for(int k=0;k<3;k++)
            {
             c[i][j] +=arr1[i][k] * arr2[k][j];


            }

        }
        }

return c;

}

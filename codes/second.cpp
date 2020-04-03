
#include<iostream>
#include<string>


using namespace std;
void func_two(string word);

int main()
{
    string word;
    int length;
    cout<<"Enter your word:"<<endl;
    cin>>word;



    func_two(word);


    return 0;
}
void func_two(string word )
{
     int length= word.length();
    int my_count = 0;
    for(int i=0; i<length; i++)
    {
        if(word[i]==word[(length-1)-i])
        {
            my_count++;
        }
        else
        {
            break;
        }

    }
    if(my_count==length)
    {
        cout<<"Its is a Palindrome"<<endl;
    }
    else
    {
        cout<<"Its is Not a Palindrome "<<endl;
    }
}

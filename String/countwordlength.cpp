#include<iostream>
using namespace std;

int lengthcount(char ch[])
{
    int length = 0;

    for(int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    const int maxSize = 100;
    char ch[maxSize];

    cout << "Enter a sentence: ";
    cin>>ch;
    int len = lengthcount(ch);

    cout << "Length of sentence is: " << len << endl;

    return 0;
}

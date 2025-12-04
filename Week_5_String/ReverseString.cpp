#include<iostream>
#include<string.h>
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

void reverse(char ch[], int n)
{
    int j = n-1 , i=0;

    while(i<j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

}

int main()
{
    char ch[100];

    cout << "Enter a sentence: ";
    cin.getline(ch,100);
    int n= lengthcount(ch);
     reverse(ch,n);

    cout << "reverse of sentence is: " << ch << endl;

    return 0;
}

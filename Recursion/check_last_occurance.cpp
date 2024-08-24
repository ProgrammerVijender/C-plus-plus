#include <iostream>
#include <vector>
#include <string>

using namespace std;
    
    //1st Basic method 
// int main()
// {
//     string c = "abcddedg";
//     char x = 'd';
//     int j =0;

//     for(int i=c.length()-1; i>=0; i--)
//     {
//         if(x == c[i])
//             {
//             j=i; 
//             break;}
//     }
//     cout << "i index is : " << j<< endl;
//     return 0;
// }

        //recursion method

int checkoccurance(const string &ch, char x, int size) {
    if (size < 0)
        return -1;

    if (ch[size] == x)
        return size;

    return checkoccurance(ch,x,size-1);
}


//     return checkoccurance(ch, x, size - 1);
// }

int main()
{
    string ch = "abcddedg";
    int size = ch.length()-1;
    char x = 'd';
    cout << "d last index is : "<<checkoccurance(ch,x,size);
}




// int main() {
//     string ch = "abcddedg";
//     int size = ch.length() - 1;
//     char x = 'd';
//     cout << "The last index of 'd' is: " << checkOccurrence(ch, x, size) << endl;
//     return 0;
// }

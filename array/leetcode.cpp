// #include<iostream>
// using namespace std;

// int main()
// {
//    int s=0,n,arr[3][3] = {{1,1,0},{1,0,1},{0,0,0}};
//     int k[3][3];
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 2; j >0; j--)
//           { int k,s=0;
//                 k[]=arr[j];
//             s++;
//           }


//         }
        
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j > 3; j--)
//           {
//             cout<<arr[i][j];
//           }


//         }

//         return 0;
// }












// int main(){

// class Solution {
// int n=3,arr[n],k=0;


// for(int i=0; i<n; i++)
// {   
//     for(int j=0; j<n; j++)
//     {
//     cin>>arr[j];
//     }

//     for(int j=n-1; j=0; j--)
//     {
//         arr[k]=arr[j];
//         k++;
//     }

// }

    #include<iostream>
using namespace std;

int main()
{
    int s = 0, n, arr[3][3] = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    int k[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            k[i][j] = arr[i][j];
            // s++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        // for (int j = 0; j < 3; j++) 
          for (int j = 2; j >= 0; j--)
        {
            cout << k[i][j] << " ";
        }
        cout << endl;
    }
cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int  j= 0; j < 3; j++)
        {
            if (k[i][j]==0)
            {
                k[i][j]=1;
            }
            else
            {
                k[i][j]=0;
            }
            
        }
        
    }

     for (int i = 0; i < 3; i++)
    {
        for (int  j= 0; j < 3; j++)
        // for (int j = 2; j >= 0; j--)
        {
            cout << k[i][j] << " ";
            
        }
        cout<<"  ";
    }
    


    return 0;
}

 #include<iostream>
using namespace std;



int SolveRecursion( int n , int k)
{
    //base case
    if(k == 1)
    {
       return n;
    } 
    
    if(k ==2 )
    {
        // return (k + k*(k-1));
        // return k * (1 + (k-1));
        return k*k;
    }

    int ans = (SolveRecursion(n-1,k) + SolveRecursion(n-2,k) )*(k-1);

    return ans;
    
}
// not completed
int main()
{
    int n = 3;
    int k = 2;

    int ans = SolveRecursion(n,k);

    cout<<ans<<endl;

    return 0;
}
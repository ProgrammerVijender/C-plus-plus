int maxpalindrome(int mid,string s)
    {
        int i=mid,j=mid,count = -1;
        while( s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
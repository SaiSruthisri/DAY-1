
#include <bits/stdc++.h>

using namespace std;


int candies(int n, vector<int> arr) {
     vector<int>a(n,1);

    for(auto i=1;i<n;i++)
    {
       if(arr[i]>arr[i-1] )
       {
           if(a[i]<=a[i-1])
            a[i]=a[i-1]+1;
       }

    }
    for(auto i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1] )
        {
            if(a[i]<=a[i+1])
            a[i]=a[i+1]+1;
        }
    }
    int  candies=0;
    for(auto i=0;i<n;i++)
    {
        candies+=a[i];
    }
    return candies;
}

int main()
{
int n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    arr.push_back(temp);

}
int x = candies( n, arr);
cout<<x<<"\n";

}

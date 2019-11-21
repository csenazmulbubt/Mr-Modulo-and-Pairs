#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

        int n,k,j=0;;
        cin>>n>>k;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[j++]=arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                if(arr[i]%arr[j]==k)
                count++;
        }
        cout<<count<<endl;
    }

}

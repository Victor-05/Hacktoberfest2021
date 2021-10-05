#include <iostream>

using namespace std;

int main()
{
    int n,v[1001],i,k;
    //n=array size
    cout<<"Array size:";
    cin>>n;
    cout<<endl<<"Array elements:";
    for(i=1;i<=n;i++)
    {
        //We input array elements
        cin>>v[i];
    }
    cout<<endl;
    cout<<endl;
    for(i=1;i<=n/2;i++)
    {
        //We change the values
        //v[i]= current value

        //We switch values (v[i] with v[n-i+1])
        //k it's used like an empty glass
        k=v[i];
        v[i]=v[n-i+1];
        v[n-i+1]=k;
    }

    //Print out the values
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}

//Matrix Addition.
#include <iostream>
using namespace std;
int main()
{
    int i,j,arr[3][3],brr[3][3],crr[3][3];
    cout<<"Enter the elements of the first array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of the second array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>brr[i][j];
        }
    }
    cout<<"The first matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"The second matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           crr[i][j]=0;
           crr[i][j]+=arr[i][j]+brr[i][j]; 
        }
        
    }
    cout<<"The addition of the two matrices is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<crr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx=0;
    for (i=0;i<n;i++)
    {
    mx= max(mx,arr[i]);
    cout<<mx<<endl;

    }

return 0;
}

#include<iostream>
using namespace std;
int main(){
int a[100],i,j,n,temp;
cout<<"BUBBLE SORT";
cout<<"\nEnter Array limit: ";
cin>>n;
for(i=0;i<n;i++)
{
    cout<<"Enter element a["<<i<<"]:";
    cin>>a[i];
}
cout<<"\nUNSORTED ARRAY: \n";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl<<endl;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[j]<a[i]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
cout<<"SORTED ARRAY :"<<endl;
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
}

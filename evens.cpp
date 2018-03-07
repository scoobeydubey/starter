#include<iostream>
using namespace std;

int main()
 {
int s1,s2,arr[50],arr2[50],p;
	cout<<"enter the length of array"<<endl;
	cin>>s1;
	cout<<"enter the element of array";
	for(int i=0;i<s1;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number";
	cin>>p;
/*	cout<<"enter the length of array"<<endl;
	cin>>s2;
	cout<<"enter the element of array";
	for(int i=0;i<s2;i++)
	{
		cin>>arr2[i];
	}
  int count=0;*/
for(int i=0;i<s1;i++)
{
  for(int j=i+1;j<s1;j++)
  {
    if(arr[i]+arr[j]==p)
    {
      cout<< arr[i]<<" "<<arr[j]<<endl;
    }
  }
  
}
  

return 0;
}


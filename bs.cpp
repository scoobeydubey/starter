#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int i,n,arr[100],first,last,mid,j,temp,num;
cout<<"enter the number of elements in your array\t";
cin>>n;
cout<<"enter the elements of your array\t";
for(i=0;i<n;i++)
{
   cin>>arr[i];
}
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
   { 
     if(arr[i]>arr[j])
     { arr[i]=temp;
     temp=arr[j];
     arr[i]=arr[j];
	 }
   }
}
cout<<"enter the element you want to search";
cin>>num;
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{if(arr[first]<num)
{first=mid+1;
}
else if(arr[mid]==num)
{cout<<"element"<<num<<"found at location"<<mid+1<<endl;
}
else{last=mid-1;
}
if(first>last)
{cout<<"element not found";

}
}
return 0;
}

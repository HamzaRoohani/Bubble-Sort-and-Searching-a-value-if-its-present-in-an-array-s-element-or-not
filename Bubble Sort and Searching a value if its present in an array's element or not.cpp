#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter the size of the Array"<<endl;
cin>>size;
int array[size];

for(int i=0;i<size;i++)
{
cout<<"Enter the value of the Array"<<i+1<<endl;
cin>>array[i];
}

//task 1

int count=1,swap=0;
while(count<size)
{
for(int i=0;i<(size-count);i++)
{
if(array[i]>array[i+1])
{
int temp;
temp=array[i];
array[i]=array[i+1];
array[i+1]=temp;
swap++;
}
}
count++;
}
cout<<"SWAP: "<<swap;
for(int i=0;i<size;i++)
{
cout<<array[i]<<endl;}

//task 2

int key,match=0;
cout<<"Enter a value you want to search in Array"<<endl;
cin>>key;

for(int i=0;i<size;i++)
{
if(array[i]==key)
{
match++;
}
}
if(match>=1)
cout<<"The value you entered is present inside array"<<endl;
else
cout<<"The value you entered is not present inside array"<<endl;

//task3

int j=0;
for(int i=0;i<size;i++)
{if(array[i]==array[i+1])
{
cout<<array[i];
j++;
}

}
cout<<"The number of duplication in array is: "<<j;
return 0;
}

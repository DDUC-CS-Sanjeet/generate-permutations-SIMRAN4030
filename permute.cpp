#include <iostream>
using namespace std;

void permute(char arr[],int x,int size)
{
    if((size-1)==x)
    { 
      cout<<arr<<endl;
    }
    else
    for(int i=x;i<size;i++)
    {
     swap(arr[x],arr[i]);
      
     permute(arr,x+1,size);
     
     swap(arr[x],arr[i]);


    }
    
}

int main()
{ int num;
  char alpha='a';
  char* arr;
  cout<<"enter the number of characters\t";
  cin>>num;
  arr=new char[num+1];
  arr[num]='\0';
  for(int i=0;i<num;i++,alpha++)
  { 
      arr[i]=alpha;
  }
  permute(arr,0,num);
  return 0;

}
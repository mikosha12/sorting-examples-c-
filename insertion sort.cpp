#include<iostream>
using namespace std;
void insertionsort(int data[],int n){
	int i,j,temp;
	for(i=1;i<=n-1;i++){
		
	
	for(j=i-1;j>=0;j--)
	{
		if(data[j]>data[j+1])
	{
	
		temp=data[j];
		data[j]=data[j+1];
		data[j+1]=temp;
	}
	else 
	break;
}

}
}


int main(){
	int n;
	int data[n];
	cout<<"enter the max size u want"<<endl;
	cin>>n;
	cout<<"enter the data "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
		
	}
	insertionsort(data,n);
	 cout<<"the sorted data is"<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<data[i]<<",";
	 	
	 }
	 return 0;
}

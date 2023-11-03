#include<iostream>
using namespace std;
void insertionsort(int list[]){
	int temp;
	for(int i=1;i<5;i++)
	{
		for(int j=i;j>=1;j--){
			if(list[j]>list[j-1]){
				temp=list[j];
				list[j]=list[j-1];
				list[j-1]=temp;
			}
		}
	}
}
int main(){
	int list[]={15,6,7,8,3}; 
	cout<<"before the sorted data is"<<endl;
	for(int i=0;i<5;i++){
		cout<<list[i]<<" ";
	}
	insertionsort(list);
		cout<<"after the sorted data is"<<endl;
	for(int i=0;i<5;i++){
		cout<<list[i]<<" ";
	}
	
	return 0;
	
}

#include<iostream>
using namespace std;
void simplesort(int list[]){
	int temp;
	for(int i=0;i<=5;i++){
		for(int j=i+1;j<=6;j++){
			if(list[i]>list[j]){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		
	}
}
int main(){
	int list[]={12,17,7,76,8,9,4};
	cout<<"the values before sort are"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<list[i]<<",";
	}
	cout<<endl;
	simplesort(list);
	cout<<"the values after sort are"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<list[i]<<",";}
	
	return 0;
}





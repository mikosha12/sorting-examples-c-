#include<iostream>
using namespace std;
void selectionsort(int list[]){
	int minindex,temp;
	
	for(int i=0;i<=5;i++){
		minindex=i;
		for(int j=i+1;j<=6;j++){
			if(list[j]<list[minindex]){
				minindex=j;
			}
			if(minindex!=i){
				temp=list[i];
				list[i]=list[minindex];
				list[minindex]=temp;
			}
		}
		}
	
}

int main(){
	int list[]={12,17,54,76,3,9,4};
	cout<<"the values before sort are"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<list[i]<<",";
	}
	cout<<endl;
	selectionsort(list);
	cout<<"the values after sort are"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<list[i]<<",";}
	
	return 0;
}

 #include<iostream>
 using namespace std;
 void bubblesort(int list[]){
 	int temp;
 	int n=7;
 	for(int i=n-2;i>=0;i--){
	 for(int j=0;j<=i;j++)
	 {
	 	if(list[j]>list[j+1]){
	 		temp=list[j];
	 		list[j]=list[j+1];
	 		list[j+1]=temp;
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
	bubblesort(list);
	cout<<"the values after sort are"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<list[i]<<",";}
	
	return 0;
 }

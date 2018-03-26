#include<iostream>
using namespace std;

void quicksort(int *array_, int start, int end){
	if(start>=end)return;
	int i=start, j=end;
	int mid  = array_[(i+j)/2];
	array_[(i+j)/2]=array_[j];
	array_[j]=mid;
	while(true){
		while(array_[i]< mid&&i<j)
			i++;
		if(i<j){
			array_[j]=array_[i];
			j--;
		}
		while(array_[j]>=mid&&j>i)
			j--;
		if(i<j){
			array_[i]=array_[j];
			i++;
		}
		if(i==j)break;
	}
	array_[i]=mid;
	quicksort(array_,start,i);
	quicksort(array_,i+1,end);
	return;
}
int main(){
	int array_[111];
	int len;
	cin >> len;
	for(int i=0; i<len;i++){
		cin>>array_[i];
	}
	quicksort(array_,0,len-1);
	for(int i=0; i<len;i++){
		cout<<array_[i]<<endl;
	}
	return 0;
}

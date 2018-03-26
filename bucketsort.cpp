#include<iostream>
using namespace std;
int main(){
	int array_[111];
	int max_=10000;
	int *cot=new int[max_](0);
	int len;
	cin >> len;
	for(int i=0; i<len; i++){
		cin>>array_[i];
	}
	for(int i=0;i<len;i++){
		cot[array_[i]]++;
	}
	for(int i=1;i<max_;i++)
		cot[i]+=cot[i-1];
	int new_array[111];
	for(int i=len -1;i>=0;i--){
		new_array[--cot[array_[i]]]=array_[i];
	}
	for(int i=0; i<len;i++)
		cout<<array_[i]<<endl;
	return 0;
}

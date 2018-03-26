#include<iostream>
using namespace std;

int main(){
	int array_[111];
	int len;
	cin >> len;
	for(int i=0;i<len;i++)
		cin>>array_[i];

	for(int i=len;i>1;i--){
		for(int j=0;j<i-1;j++){
			if(array_[j]>array_[j+1]){
				int tmp = array_[j];
				array_[j]=array_[j+1];
				array_[j+1]=tmp;
			}
		}
	}

	for(int i=0;i<len;i++)
		cout<<array_[i]<<endl;

	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int array_[111];
	int len;
	for(int i=1;i<len;i++){
		int tmp = array_[i];
		int j = i-1;
		while(j>=0&&array_[j]>tmp){
			array_[j+1]=array_[j];
			j--;
		}
		array_[j+1]=tmp;
	}
}

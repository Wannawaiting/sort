#include<iostream>
using namespace std;

void insertsort(int *array_, int start_, int len, int delta){
	for(int i = start_ + delta; i < len; i+=delta){
		int j = i - delta;
		int tmp = array_[i];
		while(j>=start_&&array_[j]>tmp){
			array_[j+delta]=array_[j];
		}
		array_[j+delta] = tmp;
	}
	return ;
}
int main(){
	int array_[111];
	int delta;
	int len;
	for(delta = len/2; delta>0; delta/=2){
		for(int i = 0; i < delta; i++){
			insertsort(array_, i, len, delta);
		}
	}
	return 0;
}

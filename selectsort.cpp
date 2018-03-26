#include<iostream>
using namespace std;
int main(){
	int array_[111]
	int len;
	int i, j;
	for(i=0; i< len-1; i++){
		int min_ = i;
		j = i+1;
		while(j<len){
			if(array_[j]<array_[min])
				min_ = j;
			j++;
		}
		int tmp = array_[min_];
		array_[min_]=array_[i];
		array_[i] = tmp;
	}
	return 0;
}

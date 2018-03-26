#include<iostream>
using namespace std;

void inline swap(int *array_, int i, int j){
	int tmp = array_[i];
	array_[i]= array_[j];
	array_[j]= tmp;
	return ;
}

void make_heap(int *array_,int len){
	for(int i = len/2-1;i>=0;i--){
		int j=i;
		while(true){
			if(2*j+2<len){
				int max_ = array_[2*j+1]>array_[2*j+2]? (2*j+1):(2*j+2);
				if(array_[max_]>array_[j]){
					swap(array_, max_, j);
					j = max_;
				}
				else break;
			}
			else if(2*j+1<len){
				if(array_[2*j+1]>array_[j]){
					swap(array_, 2*j+1, j);
				}
				break;
			}
			else break;
		}
	}
	return ;
}
void rm_max(int *array_, int len){
	array_[0] = array_[len-1];
	len -=1;
	int j = 0;
	while(true){
		if(2*j+2<len){
			int max_ = array_[2*j+1]>array_[2*j+2]?(2*j+1):(2*j+2);
			if(array_[max_]>array_[j]){
				swap(array_,max_,j);
				j =max_;
			}
			else break;
		}
		else if(2*j+1<len){
			if(array_[2*j+1]>array_[j]){
				swap(array_,2*j+1,j);
			}
			break;
		}
		else break;
	}
}
int main(){
	int array_[111]={0};
	int len;
	cin>>len;
	for(int i=0;i<len;i++){
		cin>>array_[i];
	}
	int cot = len;
	make_heap(array_, len);
	for(int i=0;i<len;i++)
		cout<< array_[i]<<' ';
	cout<<endl;
	while(cot>0){
		cout<< array_[0] << endl;
		rm_max(array_ , cot);
		cot--;
	}
	return 0;
}

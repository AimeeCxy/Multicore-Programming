#include<iostream>
#include<stdlib.h>
#define random(x)(rand()%x)
using namespace std;
int main(){
	for(int i=0;i<5;i++){
		cout<<"Ëæ»úÊý£º"<<random(10)<<endl;
	}
	return 0;
}

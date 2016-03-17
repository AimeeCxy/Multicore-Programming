//#include<stdafx.h>
//a example of using the _beginthread to create thread
#include<windows.h>
#include<process.h>
#include<iostream>
#include<fstream>
using namespace std;

void ThreadFunc1(PVOID param){
	while(1){
		Sleep(1000);
		cout<<"This is ThreadFunc1"<<endl;
	}
}

void ThreadFunc2(PVOID param){
	while(1){
		Sleep(1000);
		cout<<"This is ThreadFunc2"<<endl;
	}
}

int main(){
	int i=0;
	_beginthread(ThreadFunc1,0,NULL);
	_beginthread(ThreadFunc2,0,NULL);
	Sleep(3000);
	cout<<"end"<<endl;
	return 0;
} 

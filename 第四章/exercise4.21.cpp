// lianxi.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "iostream"
#include"vector"
using namespace std;

int main(){

	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto &x : v) {
		(x % 2 == 0) ? x = x : x*=2;
	}
	for (auto c : v)
		cout << c << endl;
}


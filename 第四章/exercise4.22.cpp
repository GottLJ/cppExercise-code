#include "stdafx.h"
#include "iostream"
#include"vector"
using namespace std;

int main() {
	int grade;
	cin >> grade;
	string finalgrade = (grade > 90) ? "high pass" : (grade > 60 && grade < 75) ? "low pass" : (grade < 60) ? "fail" : "pass";
	cout << finalgrade << endl;
}

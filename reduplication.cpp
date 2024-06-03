#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string:";
	cin>>s;

	int number;
	cout<<"enter the number of repetation";
	cin>>number;

	for(int i=1;i<=number;i++){
		cout<<s;
	}
	return 0;
}

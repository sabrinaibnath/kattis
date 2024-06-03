#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	cout<<"string:";
	cin>>s1;

	set<char> s;

	for(int i=0;i<s1.size();i++){

		s.insert(s1[i]);
	}

	int size= s.size();
	
	if(size==1){
		cout<<size-1<<endl;
	}

	else if(size==2){
		cout<<size<<endl;
	}
	else{
		cout<<size-2<<endl;
	}
	return 0;
}
	
		

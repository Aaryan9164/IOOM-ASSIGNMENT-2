//Assign1_Prob3.cpp

#include <bits/stdc++.h>
using namespace std;
#include"String.cpp"

int main()
{
	char a[50];
	cout<<"String a=";
	cin>>a;
	//gets(a);  //for with space
	char b[50];
	cout<<"string b=";
	cin>>b;
	
	String p(a);
	String q(b); 
	display(p);
	display(q);
	
	String c=p+q;
	cout<<"first character in the new string:"<<p[0]<<endl;
	
	cout<<"\nAfter merging both strings:\n";
	display(c);
	
	if(p==q)
	{
		cout<<"\nstrings are equal"<<endl;
	}
	if(p!=q)
	{
		cout<<"\nstrings are not equal"<<endl;
	}
	if(p<=q)
	{
		cout<<"\nfirst string is shorter than other"<<endl;
	}
		
}
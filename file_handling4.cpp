#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	int count=0;
	char newinfo[80];
	fstream f1,f2;
	f1.open("info.txt",ios::in);
	f2.open("new.txt",ios::out|ios::in);
	char ch;
	while(f1)
	{
		f1.get(ch);   
		cout<<ch;
		int i=0;
		if(ch==' ')
		{
			if(count>0)
			{
				i++;
				continue;
				count++;
			}
		}
		if(ch!=' ')
		{
			count=0;
			f2.put(ch);
			i++;
		}
	}
	f1.close();
	f2.seekg(0);
	while(f2)
	{
		f2.getline(newinfo,80);
		cout<<newinfo;
		
	}
	f2.close();
}

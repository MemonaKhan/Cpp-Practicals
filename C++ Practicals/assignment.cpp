#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Webpage
{
	double width,height;
public:
	Webpage()
	{
		width=0;
		height=0;
		cout<<"WebPage default constructor called\n\n";
	}
	
	Webpage(double w, double h)
	{
		width=w;
		height=h;
		cout<<"Webpage parameterized constructor called\n\n";
	}
	void showData()
	{
		cout<<"WebPage"<<endl;
		cout<<"Width = "<<width<<endl;
		cout<<"Height = "<<height<<endl;
	}
};

class Links
{
	string name;
public:
	Links()
	{
		name="";
		cout<<"Links default constructor called\n\n";
	}
	Links(string n)
	{
		name=n;
		cout<<"Links parameterized constructor called\n\n";
	}
	void showData()
	{
		cout<<"Link"<<endl;
		cout<<"Name = "<<name<<endl;
	}
};

class Website
{
private:
	string name;
	Webpage page;
	Links link;
public:
	Website()
	{
		cout<<"website default constructor called\n\n";
	}
	
	Website(string n, Webpage w, Links l)
	{
		name=n;
		page=w;
		link=l;
		cout<<"Website parameterized constructor called\n\n";
	}
	void showData()
	{
		cout<<"Website"<<endl;
		cout<<"Name = "<<name<<endl;
		page.showData();
		link.showData();
	}
};

void main(void)
{
	Website web1;
	Webpage page1;
	Links link1;
	Website web2("MyWebsite",page1, link1);
	Webpage page2(451,754);
	Links link2("HomePage");
	Website web3("Style",page2, link2);

	web3.showData();

	getch();
}
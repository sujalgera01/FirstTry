#include<iostream>
using namespace std;
class basic
{
     private:
	char sname[20];
char city[20];
int regno;
     public:
	void get1()
{
	cout<<”Enter name, city and register number”;
	cin>>sname>>city>>regno;
}
};
class sem1 : public basic
{

		int py, math, phy;
		float gpa1;
	public:
		void get2()
{
cout<<”Enter Marks in Python, Maths and Phy”;
	cin>>py>>math>>phy;
}
void cal1()
{
     gpa1=(py+math+phy)/3.0;
}		
};
class sem2 : public sem1
{

		int dsa, oops, dld;
		float gpa2,cgpa;
	public:
		void get3()
{
cout<<”Enter Marks in dsa, oops and dls”;
	cin>>dsa>>oops>>dld;
}
void cal2()
{
     gpa2=(dsa+oops+dld)/3.0;
     cgpa=(gpa1+gpa2)/2
}
void disp()
{
     cout<<”Regn No:”<<regno;
cout<<”student name”<<sname;
cout<<”GPA in Sem1”<<gpa1;
cout<<”GPA in Sem2”<<gpa2;
cout<<”CGPA till Sem2”<<cgpa;
	
};
int main()
{
      sem2 s;
      s.get1();
      s.get2();
      s.get3();
      s.cal1();
      s.cal2();
      s.disp();
}
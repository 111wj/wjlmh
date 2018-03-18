
#include<iostream>
using namespace std;
class point
{
public:
	point();
	point(int  x,int y);
	~point();
	void setpoint(int x1,int y1);
	int getx();
	int gety();
	void setx(int m);
	void sety(int n);
private:
	int x,y;
};
point :: point()
{
	x=0;y=0;
	cout<<"缺省样式的构造函数调用完毕！"<<endl;
}
point :: point(int m,int n)
{
  x=m;
  y=n;
  cout<<"带参构造函数调用完毕！"<<endl;
}
point :: ~point()
{     
	cout<<"点（"<<x<<","<<y<<")"<<"析构函数调用完毕！"<<endl;
}
void point :: setpoint(int x1,int y1)
{
 x=x1;y=y1;
}
int point :: getx()
{
	return x;
}
int point :: gety()
{
	return y;
}
void point :: setx(int m)
{
x=m;
}
void point :: sety(int n)
{
y=n;
}
int main()
{
	point p2(100,200),p1(0,0);
//	cout<<"p1的坐标："<<p1.getx()<<","<<p1.gety()<<endl;
 //   cout<<"p2的坐标:"<<p2.getx()<<","<<p2.gety()<<endl;
//	p1.setpoint(30,50);
	p2.setx(10);
	p2.sety(20);
//	cout<<"p1的坐标："<<p1.getx()<<","<<p1.gety()<<endl;
//	cout<<"p2的坐标:"<<p2.getx()<<","<<p2.gety()<<endl;
     return 1;
}
/*

选择菜单命令Build|Start Debug |Step In，系统进入单步执行状态，程序开始运行，并出现一个DOS窗口，此时光标停在main()函数的入口处。 
2、把光标移到函数调用语句answer=fib(n)前，从Debug菜单单击Run To Cursor，在程序运行的DOS窗口中按提示输入数字10，这时回到可视界面中，光标停在第11行，观察一下n的值。
3、从Debug菜单中单击Step Into，程序进入fib函数，观察一下n的值，把光标移到语句return(fib(n-2)+fib(n-1))前，从Debug菜单单击Run to Cursor，再单击Step Into，程序递归调用fib函数，又进入fib函数，观察n的值。

*/



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
	cout<<"ȱʡ��ʽ�Ĺ��캯��������ϣ�"<<endl;
}
point :: point(int m,int n)
{
  x=m;
  y=n;
  cout<<"���ι��캯��������ϣ�"<<endl;
}
point :: ~point()
{     
	cout<<"�㣨"<<x<<","<<y<<")"<<"��������������ϣ�"<<endl;
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
//	cout<<"p1�����꣺"<<p1.getx()<<","<<p1.gety()<<endl;
 //   cout<<"p2������:"<<p2.getx()<<","<<p2.gety()<<endl;
//	p1.setpoint(30,50);
	p2.setx(10);
	p2.sety(20);
//	cout<<"p1�����꣺"<<p1.getx()<<","<<p1.gety()<<endl;
//	cout<<"p2������:"<<p2.getx()<<","<<p2.gety()<<endl;
     return 1;
}
/*

ѡ��˵�����Build|Start Debug |Step In��ϵͳ���뵥��ִ��״̬������ʼ���У�������һ��DOS���ڣ���ʱ���ͣ��main()��������ڴ��� 
2���ѹ���Ƶ������������answer=fib(n)ǰ����Debug�˵�����Run To Cursor���ڳ������е�DOS�����а���ʾ��������10����ʱ�ص����ӽ����У����ͣ�ڵ�11�У��۲�һ��n��ֵ��
3����Debug�˵��е���Step Into���������fib�������۲�һ��n��ֵ���ѹ���Ƶ����return(fib(n-2)+fib(n-1))ǰ����Debug�˵�����Run to Cursor���ٵ���Step Into������ݹ����fib�������ֽ���fib�������۲�n��ֵ��

*/


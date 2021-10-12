//根据半径计算园的周长和面积
#include<iostream>
const double Pi = 3.1416;
float fcir_L(float);
float fcir_S(float);
using namespace std;

int main()
{
	float r, l, s;
	cout << "r=";
	cin >> r;
	l = fcir_L(r);
	s = fcir_S(r);
	cout << "l="<<l<<endl;
	cout << "s=" << s;
	return 0;
}
//圆的周长函数
float fcir_L(float x)
{
	double z = -1.0;
	if (x >= 0.0)
		z = 2*Pi*x;
	return z;
}
//圆的面积函数
float fcir_S(float x)
{
	double z = -1.0;
	if (x >= 0.0)
		z = Pi*x*x;
	return z;
}
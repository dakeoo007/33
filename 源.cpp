//���ݰ뾶����԰���ܳ������
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
//Բ���ܳ�����
float fcir_L(float x)
{
	double z = -1.0;
	if (x >= 0.0)
		z = 2*Pi*x;
	return z;
}
//Բ���������
float fcir_S(float x)
{
	double z = -1.0;
	if (x >= 0.0)
		z = Pi*x*x;
	return z;
}
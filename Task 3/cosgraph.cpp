/*
* File Name: "cosgraph.cpp"
* Description:
* - This program is input the values of amplitude, frequency, phase, and to display
*                   the cosine graph on console window.
* Programmed by Ye-Jun Jang,
* Last updated: Version 1.3, March 13, 2011 (by Ye-Jun Jang).
*
* ========================================================
* Version Control (Explain updates in detail)
* ========================================================
* Name          YYYY/MM/DD Version Remarks
* 
* Ye-Jun Jang   2011/03/12 1.0 Design an program to input the values of amplitude, frequency, phase, and to display
*                              the cosine graph on console window.
* Ye-Jun Jang   2011/03/12 1.1 Addtional comments.
* Ye-Jun Jang   2011/03/13 1.2 Add to else if(cos_value=0)
* Ye-Jun Jang   2011/03/13 1.3 In case Amplitude>1
* ========================================================
*/
#include <iostream>
#include <iomanip>//setprecision과 setw()를 사용하기 위한 iomanip 라이브러리 포함
#include <cmath>//cos함수를 사용하기 위한 cmath 라이브러리 포함

#define PI 3.141592 //PI 값을 3.141592로 정의

using namespace std;

double cosine(double amp, double freq, double time, double phase)//cosine 함수 정의
{
	double result;

	result=amp*cos(2*PI*freq*time+phase);

	return result;
}

int main(void)
{
	double a, f, st, et, pha;
	double cos_value;

	cout << "enter the amp:";
	cin >> a;
	cout << "enter the frequency:";
	cin >> f;
	cout << "enter the phase:";
	cin >> pha;
	cout << "enter the start time:";
	cin >> st;
	cout << "enter the end time:";
	cin >> et;

	
	cout << "===============================================================================" << endl;
	cout << " time    cos(x) Value " << setw(34) << "cos(x) Graph" << endl; //setw( )입력된 값만큼 여백을 만들어줌.
	cout << "===============================================================================" << endl;
	cout << setw(24) << -a << setw(26) << "0" << setw(27) << a << endl;
	cout << "                    " << "-----------------------------------------------------------" << endl;
	cout << fixed << setprecision(2);
	for(double i=st; i<=et+0.05; i+=0.05) //시작 시간값을 0.00~ 1.00까지 출력하기 위한 for 문
	{
		cos_value=cosine(a,f,i,pha); //cos_value 변수에 consine함수의 결과값 저장
		
		if(cos_value>0.01) //cos_value값이 0보다 클 때 별이 찍히는 점
		{
			cout << " " << i << "        " << cos_value << setw(33) << "|" << setw(27*cos_value/a) << "*" << endl;
		}
		else if(cos_value<-0.01) //cos_value값이 0보다 작을 때 별이 찍히는 점
		{
			cout << " " << i << "       " << cos_value << setw(34+27*cos_value/a) << "*" <<  setw(-27*cos_value/a) << "|" << endl;
		}
		else if(cos_value=0) //cos_value값이 0일 때 별이 찍히는 점
		{
			cout << " " << i << "        " << cos_value << setw(33)  << "*" << endl;
		}
		else
		{
			cout << " " << i << "        " << cos_value << setw(33)  << "*" << endl;
		}

	}

	return 0;	

}

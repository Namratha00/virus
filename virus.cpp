#include <iostream>
using namespace std;
class illness
{
protected:
	float death, cases, mRate;
public:
	virtual float GetMortalityRate() = 0;
};
class virus : public virtual illness
{
protected:
	float death, cases, mRate;
public:
	float GetMortalityRate()
	{
		mRate = death / cases;
		cout << "mRate is " << mRate;
		return mRate;

	}
};
class covidvirus : public virus
{
protected:
	float death, cases, mRate;
public:
	float GetMortalityRate()
	{
		cout << "enter the input of covid virus\n";
		cin >> death;
		cout << "enter the output of covid virus\n";
		cin >> cases;
		mRate = death / cases;
		cout << "the mRate is:";
		return mRate;
	}
};
class hivvirus : public virus
{
public:
	float GetMortalityRate()
	{
		cout << "enter the input of HIV virus\n";
		cin >> death;
		cout << "enter the output of HIV virus\n";
		cin >> cases;
		mRate = death / cases;
		cout << "the mRate is : ";
		return mRate;



	}
};
class birdflue :public virus
{
protected:
	float death, cases, mRate;
public:
	float GetMortalityRate()
	{
		cout << "enter the input of bird flue\n";
		cin >> death;
		cout << "enter the output of birdflue\n";
		cin >> cases;
		mRate = death / cases;
		cout << "the mRate is :";
		return mRate;
	}
};
int main()
{
	int no;
	cout << "select any one\n 1.covid virus\n 2.hiv virus \n 3.birdflue\n";
	cin >> no;
	if (no == 1)
	{
		cout << "you selected covid virus\n";
		covidvirus c;
		cout << c.GetMortalityRate();

	}
	else if (no == 2)
	{
		cout << "you selected hiv virus\n";
		hivvirus h;
		cout << h.GetMortalityRate();
	}
	else if (no == 3)
	{
		cout << "you selected birdflue\n";
		birdflue b;
		cout << b.GetMortalityRate();
	}


	else
	{
		cout << "error--no.doesn't matches!!!!";

	}
}

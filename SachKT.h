#ifndef SachKT_H
#define SachKT_h
#include <iostream>
#include <string>
#include "Sach.h"
using namespace std;
class SachKT: public Sach
{
	private:
		float gianhap;
		float chietkhau;
	public:
		SachKT():Sach(),gianhap(0.0),chietkhau(0.0){}
		SachKT(string tensach, int namxb,float hs,float gn, float ck):Sach(tensach,namxb,hs),gianhap(gn),chietkhau(ck){}
	//setter
	void setGiaNhap(float gn)
	{
	this->gianhap=gn;
	}
	void setChietKhau(float ck)
	{
	this->chietkhau=ck;
	}
	//getter
	float getGiaNhap()const
	{
	return this->gianhap;
	}
	float getChietKhau()const
	{
	return this->chietkhau;
	}
	float tinhGiaSach()
	{
	return this->gianhap * this->heso - this->chietkhau;
	}
	void print()
	{
	cout<<"Gia: "<<this-> tinhGiaSach()<<endl;
	}
	friend istream &operator >>(istream &in, SachKT &sth)
	{
		cout<<"Ten: ";in>>sth.name;
		cout<<"NamXB: ";in>>sth.namxb;
		cout<<"He So: ";in>>sth.heso;
		cout<<"Gia Nhap: ";in>>sth.gianhap;
		cout<<"Chiet khau: ";in>>sth.chietkhau;
		return in;
	}
	~SachKT()
	{
	}
};
#endif

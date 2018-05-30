#ifndef SachTinHo_H
#define SachTinHoc_h
#include<iostream>
#include<string>
#include"Sach.h"
using namespace std;
class SachTinHoc:public Sach
{
	private:
		float gianhap;
	public:
		SachTinHoc():Sach(),gianhap(0.0){}
		SachTinHoc(string tensach, int namxb,float hs,float gn):Sach(tensach,namxb,hs),gianhap(gn){}
	//setter
	void setGianhap(float gn)
	{
		this->gianhap=gn;
	}
	//getter
	float GiaNhap()const
	{
		return this->gianhap;
	}
	float tinhGiaSach()
	{
		return this->gianhap * this->heso;
	}
	void print()
	{
		cout<<"Gia: "<<this->tinhGiaSach()<<endl;
	}
	friend istream &operator>>(istream &in, SachTinHoc &sth)
	{
		cout<<"Ten: ";in>>sth.name;
		cout<<"NamXB: ";in>>sth.namxb;
		cout<<"HeSo: ";in>>sth.heso;
		cout<<"Gia Nhap: ";in>>sth.gianhap;
		return in;
	}
	~SachTinHoc()
	{
	}

};
#endif

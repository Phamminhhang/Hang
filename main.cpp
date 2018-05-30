#include <iostream>
#include <string>
using namespace std;
#include "Sach.h"
#include "SachTinHoc.h"
#include "SachKT.h"
#define MAX 1
int main()
{	
	Sach *book[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		if(i % 2 == 0)
		{
			cout<<"Sach Kinh Te "<<i<<endl;
			SachKT *a = new SachKT();
			cin>>*a;
			book[i] = a;
		}
		else
		{
			cout<<"Sach Tin Hoc "<<i<<endl;
			SachTinHoc *b = new SachTinHoc();
			cin>>*b;
			book[i] = b;
		}
	}	
	for (int i = 0; i <MAX; ++i)
	{
		book[i] -> print();
	}
	return 0;
}


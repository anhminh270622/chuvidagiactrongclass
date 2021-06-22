#include<iostream>
using namespace std;

class DaGiac {
public:
	int soCanh;
	int a[100];
	void Nhap()
	{
		cout << "Nhap so luong canh: " << endl;
		cin >> soCanh;
		for (int i = 0; i < soCanh; i++)
		{
			cout << "nhap vao so canh " << i + 1 << endl;
			cin >> a[i];
		}
	}
	void Xuat()
	{
		cout << "====THONG TIN DA GIAC VUWA NHAP=== \n";
		cout << "so canh cua da giac la: " << endl;
		for (int i = 0; i < soCanh; i++)
		{
			cout << "Canh thu: " << i + 1 << "la: " << a[i] << endl;
		}
	}
	void ChuVi()
	{
		int chuVi = 0;
		for (int i = 0; i < soCanh; i++)
		{
			chuVi += a[i];
		}
		cout << "Gia tri cua chu vi la: " << chuVi;
	}
};
int main()
{
	DaGiac x;
	x.Nhap();
	x.Xuat();
	x.ChuVi();
	return 0;
}
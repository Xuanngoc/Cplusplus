#include <iostream>
using namespace std;

//my first struct 
struct sinhvien
{
	string MSV;
	float DQT;
	float DLT;
	float DTH;
	float DTK;// = DQT*0.3 + 0.7*(DTH + DLT) / 2;
};

//---Function prototype----

//NHAP ALL THONG TIN SINH VIEN
void NhapTTSV(sinhvien BXN[], int n);
//XEP LOAI SINH VIEN
string xeploai(float DTK);
// TINH TONG DIEM TRUNG BINH CUA CA LOP
double diemtrungbinhcalop(int n, sinhvien dsSV[]);
//in danh sach sinh vien//
void printall(int n, sinhvien dsSV[]);
// XUAT THONG TIN MOT SINH VIEN
void XuatTTSV(sinhvien BXN);

main()
{
	int n;
	cout<<"Nhap so luong sv lop 3.1: ";
	cin >> n;
	sinhvien dsSV[n];
	//du lieu dau vao//
	NhapTTSV(dsSV, n);
	printall(n, dsSV);

	

}
//--Define fuction
//NHAP THONG TIN SINH VIEN
void NhapTTSV(sinhvien BXN[], int n)
{
	//struct sinhvien BXN;
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap ten MSV sv"<<i+1<<": ";
		cin>> BXN[i].MSV;
		cout<<"Nhap diem qua trinh sv"<<i+1<<": ";
		cin>> BXN[i].DQT;
		cout<<"Nhap diem li thuyet sv"<<i+1<<": ";
		cin>>BXN[i].DLT;
		cout<<"Nhap diem thuc hanh sv"<<i+1<<": ";
		cin>>BXN[i].DTH;
		BXN[i].DTK=  BXN[i].DQT*0.3 + 0.7*(BXN[i].DTH + BXN[i].DLT) / 2;
	}		
}
// XUAT THONG TIN SINH VIEN
void XuatTTSV(sinhvien BXN)
{
	cout<<"MSV: "<<BXN.MSV;
	cout<<"\nDQT= "<<BXN.DQT;
	cout<<"\nDLT= "<<BXN.DLT;
	cout<<"\nDTH= "<<BXN.DTH;
	cout<<"\nDTK= "<<BXN.DTK<<"\n";
	
}
//XEP LOAI SINH VIEN
string xeploai(float DTK)
{
	if(DTK < 4.6)
		return "TRUOT";
	if(DTK <6.6 && DTK >=4.6 )
		return "TB";
	if(DTK <7.6 && DTK >=6.6)
		return "KHA";
	if(DTK <8.6 && DTK >= 7.6)
		return "GIOI";
	if(DTK >= 8.6)
		return "XUAT SAC";
}
// TINH TONG DIEM TRUNG BINH CUA CA LOP
double diemtrungbinhcalop(int n, sinhvien dsSV[])
{
	double DTB_class=0.0;
	
	for(int i=0; i<=n; i++)
	{

		DTB_class += dsSV[i].DTK;
		//cout<<dsSV[i].DTK<<" ";
	}	
	return DTB_class/n;

}
//sap xep lop theo diem trung binh
void SapxepDTK(int n, sinhvien dsSV[])
{
	
	for(int i=0; i<n; i++)
	{
		for(int k=0; k<n-1-i; k++)
		{
			if(dsSV[k].DTK < dsSV[k+1].DTK )
			{
				sinhvien temp =dsSV[k+1];
				dsSV[k+1] = dsSV[k];
				dsSV[k] =temp;
			}	
		}	
	}
}

void printall(int n, sinhvien dsSV[])
{
	cout<<"\n\nKET QUA DAU VAO \n";
	cout<<"MSV\tDTK\tXL\n";
	for(int i=0; i<n; i++)
	{
		cout<<dsSV[i].MSV<<"\t"<<dsSV[i].DTK<<"\t"<<xeploai( dsSV[i].DTK)<<endl;
	}	
	cout<<"------------------------\n";
	cout<<"TB:\t"<<diemtrungbinhcalop(n, dsSV)<<"\t"<<xeploai(diemtrungbinhcalop(n, dsSV))<<endl;
	
	SapxepDTK(n, dsSV);

	cout<<"\n\nKET QUA SAU KHI SAP XEP \n";
	cout<<"MSV\tDTK\tXL\n";
	for(int i=0; i<n; i++)
	{
		cout<<dsSV[i].MSV<<"\t"<<dsSV[i].DTK<<"\t"<<xeploai( dsSV[i].DTK)<<endl;
	}	
	cout<<"------------------------\n";
	cout<<"TB:\t"<<diemtrungbinhcalop(n, dsSV)<<"\t"<<xeploai(diemtrungbinhcalop(n, dsSV))<<endl;
}
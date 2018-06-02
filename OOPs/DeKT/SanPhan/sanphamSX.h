#include "sanpham.h"

class sanphamSX : public sanpham
{
protected:
	int GiaNguyenLieu;
	int ChiPhiSanXuat;
	int NamSanXuat;
public:
	sanphamSX(): sanpham(), GiaNguyenLieu(0), ChiPhiSanXuat(0), NamSanXuat(0){}
	sanphamSX(string MaSP, string TenSP, string LoaiSP, int a, int b, int c)
		: sanpham(MaSP, TenSP, LoaiSP), GiaNguyenLieu(a), ChiPhiSanXuat(b), NamSanXuat(0){}

	//set
	void setGiaNguyenLieu(int a){
		this -> GiaNguyenLieu =a;
	}	
	void setChiPhiSanXuat(int a){
		this -> ChiPhiSanXuat =a;
	}
	void setNamSanXuat(int a){
		this-> NamSanXuat =a;
	}
	int TinhGiaSanPham(){
		return this -> GiaNguyenLieu *1.2 + this -> ChiPhiSanXuat *1.2;
	}
	friend istream &operator >> (istream &in, sanphamSX &b){

		cout<<"Nhap ma san pham: ";
		in>>b.MaSanPham;
		cout<<"Nhap ten san pham: ";

		cin.ignore(256, '\n');
		getline(in,b.TenSanPham);//.TenSanPham;
		cout<<"Nhap loai san pham: ";
		in >> b.LoaiSanPham;
		cout<<"Nhap gia nguyen lieu: ";
		in >>b.GiaNguyenLieu;
		cout<<"NHap Chi Phi San Xuat: ";
		in >>b.ChiPhiSanXuat;
		cout<<"Nhap nam san xuat: ";
		in >> b.NamSanXuat;
		return in;
	}

	friend ostream &operator << (ostream & out, sanphamSX &b ){
		out<<b.MaSanPham;
		out<<"\t\t"<<b.TenSanPham;
		out<<"\t\t"<<b.LoaiSanPham;
		out<<"\t\t"<<b.TinhGiaSanPham();
		out<<"\t\t"<<b.NamSanXuat<<endl;;
		return out;
	}
};
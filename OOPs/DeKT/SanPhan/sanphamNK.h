#include "sanpham.h"

class sanphamSK: public sanpham
{
protected:
	float GiaNhapKhau;
	float ChiPhiVanChuyen;
	string NuocNhapKhau;
	int NamNhapKhau;
public:
	sanphamSK()
		: sanpham(), GiaNhapKhau(0), ChiPhiVanChuyen(0), NuocNhapKhau(""), NamNhapKhau(0){}
	sanphamSK(string MaSP, string TenSP, string LoaiSP, float a, float b, string c, int d)
		: sanpham(MaSP, TenSP, LoaiSP), GiaNhapKhau(a), ChiPhiVanChuyen(b), NuocNhapKhau(c), NamNhapKhau(d){}

	//set
	void setGiaNhapKhau(float a){
		this -> GiaNhapKhau =a;
	}
	void setChiPhiVanChuyen(float a){
		this -> ChiPhiVanChuyen =a;
	}
	void setNuocNhapKhau(string a){
		this -> NuocNhapKhau =a;
	}
	void setNamNhapKhau(int a){
		this -> NamNhapKhau =a;
	}
	//get
	float getGiaNhapKhau(){
		return this -> GiaNhapKhau;
	}
	float getChiPhiVanChuyen(){
		return this -> ChiPhiVanChuyen;
	}
	string getNuocNhapKhau(){
		return this -> NuocNhapKhau;
	}
	int getNamNhapKhau(){
		return this -> NamNhapKhau;
	}
	int TinhGiaSanPham(){
		return this -> GiaNhapKhau * 1.2 + this -> ChiPhiVanChuyen * 1.2;
	}
	friend ostream &operator << (ostream & out, sanphamSK &b){
		out<<b.MaSanPham;
		out<<"\t"<<b.TenSanPham;
		out<<"\t"<<b.LoaiSanPham;
		out<<"\t"<<b.TinhGiaSanPham();
		out<<"\t"<<b.NamNhapKhau;
		out<<"\t"<<b.NuocNhapKhau<<endl;
		return out;
	}

};	
#ifndef BANGDANGKYHOC_H
#define BANGDANGKYHOC_H

#include "SinhVien.h"
#include "MonHoc.h"
#include "Date.h"
#include <vector>
using namespace std;
#define MAX1 20
#define TIEN 350000
class BangDangKyHoc
{
private:
	Date ThoiGianDK;
	SinhVien DSSV[MAX1];
	int SoLuongSV=0;
	MonHoc DSMH[MAX1];
	int SoLuongMH=0;


public:
	BangDangKyHoc();
	BangDangKyHoc(Date a): ThoiGianDK(a){}

	void ThemMonHoc(string ten, int SoTinChi, float Heso, string loai){
		this -> DSMH[++SoLuongMH] = MonHoc(ten, SoTinChi, Heso,loai);
	}
	void ThemSinhVien(string hodem, string ten, string email, string SDT){
		this -> DSSV[++SoLuongSV] = SinhVien(hodem, ten, email, SDT);
	}
	void dangKyHoc(int MaSV, MonHoc a, Date b){
		for(int i=0; i< SoLuongSV; i++){
			if(DSSV[i].getMaSV() == MaSV ){
				this -> DSSV[i].ThemMonHoc1( a);
				this-> DSSV[i].setNgayDK(b);
				break;
			}
		}
	}		

	int TinhHocPhi(int MaSV){
		int hocphi=0;
		for(int i=0; i<SoLuongSV; i++){
			//tim sv 
			if(DSSV[i].getMaSV() == MaSV){
				//
				for(int k=0; k< SoLuongMH; k++){
					//
					for(int m=0; m< DSSV[i].getTongSoMon(); m++){
						//
						if( DSMH[k].getMa()  == DSSV[i].getMonHoc( DSMH[m].getMa() ).getMa() ) {
							hocphi += (TIEN *  DSMH[m].getSoTinChi() * DSMH[m].getHeSo() );
						}
					}
				}
				return hocphi;
			}
		}
	}
	void SapXep(string tieuchi){
		if(tieuchi == "MaSV" || tieuchi == "MaSinhVien"){
			for(int i=0; i< SoLuongSV -1; i++){
				for(int k=0; k< SoLuongSV -1-i; k++){
					if(DSSV[k].getMaSV() > DSSV[k+1].getMaSV()){
						int temp = DSSV[k].getMaSV() ;
						DSSV[k].setMaSV( DSSV[k+1].getMaSV() );
						DSSV[k+1].setMaSV( temp ) ;    
					}
				}
			}
		}
		//ten
		if(tieuchi == "Ten" || tieuchi == "HoVaTen"){
			for(int i=0; i< SoLuongSV -1; i++){
				for(int k=0; k< SoLuongSV -1-i; k++){
					if(DSSV[k].getTen() > DSSV[k+1].getTen()){
						string temp = DSSV[k].getTen();
						DSSV[k].setTen( DSSV[k+1].getTen() );
						DSSV[k+1].setTen( temp);
					}
				}
			}
		}
		//date
		if(tieuchi == "Date" || tieuchi=="Thoi gian dang ky"){
			for(int i=0; i<SoLuongSV -1; i++){
				for(int k=0; k< SoLuongSV -i-1; k++){
					//if(DSSV[k])
				}
			}
		}
	}

	~BangDangKyHoc();

	
};

#endif

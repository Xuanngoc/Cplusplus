#ifndef MONHOC_H
#define MONHOC_H

#include <string>
using namespace std;


class MonHoc
{
protected:
	int Ma = 100;
	string Ten;
	int SoTinChi;
	float HeSo;
	string Loai;

public:
	MonHoc(): Ma(Ma++){}
	MonHoc(string a, int b, float c, string d)
		: Ma(Ma++), Ten(a), SoTinChi(b), HeSo(c), Loai(d) {}

	int getSoTinChi(){
		return this -> SoTinChi;
	}
	float getHeSo(){
		return this -> HeSo;
	}
	int getMa(){
		return this -> Ma;
	}
		
	~MonHoc();

	/* data */
};


#endif


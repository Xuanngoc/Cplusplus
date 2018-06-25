#include "maytinhdeban.h"
#include "maytinhxachtay.h"

int main(){

	date d1(18, 6, 2014), d2(1, 1, 2014);
	cout<<d1<<";"<<d2<<endl;


	maytinh m1(d1, "Dell"), m2(d2, "HP");
	cout<<m1.getNamSanXuat()<<endl;
	
	maytinhdeban mb1(d1, "Dell", true);
	maytinhxachtay mt1(d2, "sony", 2.2);cout<<mb1.getNamSanXuat()<<endl;;

	cout<<mt1.getNamSanXuat()<<endl;
	
	cout<<mt1.getSoNamSuDung(2017)<<endl;

	return 0;
}
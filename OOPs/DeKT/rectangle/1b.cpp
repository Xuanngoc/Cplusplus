#include "hinhchunhat.h"

int main()
{
	
	Hinhchunhat temp,a,b,c;
	cin >>a>>b>>c;
	
	cout<<"Giao hinh chu nhat a va b la hinh chu nhat co: \n";
	
	temp = a.Giao(b);
	cout<<temp;
	cout<<"Giao hinh chu nhat a va c la hinh chu nhat co: \n";
	temp = a.Giao(c);
	cout<<temp;
	cout<<"Giao hinh chu nhat b va c la hinh chu nhat co:  \n";
	temp = b.Giao(c);
	cout<<temp;
}

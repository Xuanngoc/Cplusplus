#include <iostream>
#include <math.h>
using namespace std;


class phanso 
{
	protected:
		float tuso;
		float mauso;
	public:
		//contructor
		phanso():tuso(0),mauso(1){}
		
		phanso(float tu):tuso(tu),mauso(1){}
		
		phanso(float tu, float mau):tuso(tu),mauso(mau){}
		
		//setters
		void setTuso(float tu){
			this->tuso = tu;
		}
		void setMauso(float mau){
			this->mauso = mau;
		}
		//getters
		float getTuso() const{
			return this->tuso;
		}
		float getMauso() const{
			return this->mauso;
		}
		
		//methods
		phanso operator +(const phanso &b) const{
			phanso kq;
			kq.tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			kq.mauso = this->mauso * b.mauso;
			return kq; 
		}
		
		void operator += (const phanso &b){
			this -> tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			this -> mauso=this->mauso * b.mauso;
		}
		
		friend istream &operator >>(istream & in, phanso &b){
			cout<<"Moi ban nhap tu so: ";
			in>>b.tuso;
			cout<<"Moi ban nhap mau so: ";
			in>>b.mauso;
			return in;
		}
		friend ostream &operator <<(ostream & out,const phanso &b){
			out<<b.tuso<<"/"<<b.mauso<<endl;
			return out;
		}	
		
};

class Sothuc : public phanso {
protected:
	float PNguyen, PThuc;
public:
	Sothuc(): PNguyen(0), PThuc(0){}
	Sothuc(float a): PNguyen(0), PThuc(a){}
	Sothuc(float a, float b) : PNguyen(a), PThuc(b) {}
	Sothuc (phanso a){
		this -> PNguyen = a.getTuso();
		this -> PThuc = a.getMauso();
	}

	void Xuat(){
		cout<<PNguyen<< " + " <<PThuc<<"i\n\n";
	}
	//setter
	void setSoThuc(float a, float b){
		this -> PNguyen = a;
		this -> PThuc = b;
	}
	float getPN(){
		return this -> PNguyen;
	}
	float getPT(){
		return this -> PThuc;
	}
	/*Nhan*/
	Sothuc operator * ( Sothuc b){
		Sothuc kq;
		kq.setSoThuc( this -> PNguyen * b.getPN() - this -> PThuc * b.getPT(),
				this -> PThuc * b.getPN() + this -> PNguyen * b.getPT() );
		return kq;
	}
	/*tri tuyet doi*/
	double Abs(){
		double kq;
		kq =( sqrt(this -> PNguyen * this -> PNguyen  + this -> PThuc *this -> PThuc ));
		return kq;
	}
	friend ostream &operator <<(ostream & out,const Sothuc &b){
			out<<b.PNguyen<<" + "<<b.PThuc<<"i"<<endl;
			return out;
	}
	

};


int main(){
	phanso S;
	//Sothuc tu, mau1 , mau2;
	//phanso temp;
	float k;
	cin>>k;
	for(int i=1; i<=k; i++){
		Sothuc tu( i );
		Sothuc mau1((i), (1) );
		Sothuc mau2((i+1), 1);
		phanso temp(tu.Abs(), (mau1 * mau2).Abs() );
		S+=temp;
		cout<<S;
	}
	cout<<"S= "<<Sothuc(S);
}

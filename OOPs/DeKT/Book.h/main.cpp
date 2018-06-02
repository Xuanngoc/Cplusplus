#include "sach.h"
#include "sachtinhoc.h"
#include "sachkinhte.h"

int main(){
	sach *a[6];
	
	for(int i=0; i<6; i++){
		if(i%2 ==0){
			cout<<"sach kinh te "<<i<<endl;
			sachkinhte * temp1 = new sachkinhte();
			cin >>*temp1;
			a[i] = temp1;
		}
		else{
			cout<<"Sach tin hoc "<<i<<endl;
			sachtinhoc * temp2 = new sachtinhoc();
			cin>> *temp2;
			a[i] = temp2;
		}
		
	}
	cout<<"\n\nDone\n";

}
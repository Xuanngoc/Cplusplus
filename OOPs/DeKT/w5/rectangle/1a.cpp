#include "hinhchunhat.h"
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	point a(1, 3);
	point b(3, 1);
	Hinhchunhat c(a, b);
	
	
	int counter=0;
	for(int i=0; i<100; i++){
		float a = rand() % 11 ;
		float b = rand() % 11 ;
		point z(a, b);
		if (c.belong_to(z) ){
			counter ++;
		}
	}
	cout<<"There are "<<counter<<" point in the rectangle.\n";
	
	
}
#include "dog.h"
#include "cat.h"

class HomeZoo
{
	animal *Home[20];
public:
	HomeZoo(){}
	animal *getAnimal(int i){
		return this -> Home[i];
	}
	void ADD( int i, animal *a){
		this -> Home[i] = a;	
		//cout<<"ok\n";
	}
	void List(int size){
		for(int i=0; i < size; i++ ){
			
			this -> Home[i] -> Speak();
			
		}
	}
	~HomeZoo();
};
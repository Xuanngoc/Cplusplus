#include "dog.h"
#include "HomeZoo.h"
int main()
{
	HomeZoo *Home;
	Cat meo("asdsadsad");// = new Cat;
	Home -> ADD(0, &meo);

	Dog dog("sdsasda");// = new Dog();
	Home->ADD(1, &dog);

	Dog *dog1 = new Dog();
	Home->ADD(2, dog1);

	Dog *dog2 = new Dog;
	Home -> ADD(3, dog2);

	Cat *meo1 = new Cat;
	Home -> ADD(4, meo1);

	
	//animal * p = Home -> getAnimal(0);
/*	p -> Speak();*/
	Home -> List(5);
	//delete[] Home ;
}

#include "animal.h"
#include "cat.h"
#include "dog.h"

int main()
{
	Dog a("Black");
	
	cout<<a.Speak();
	Cat b("Blue");
	cout<<b.Speak();

}
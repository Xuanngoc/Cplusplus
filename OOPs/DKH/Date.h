#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int a, int b, int c ): day(a), month(b), year(c){}

	~Date();
	//get
	int getDay(){
		return day;
	}
	int getMonth(){
		return month;
	}
	int getYear(){
		return year;
	}
	bool operator > (Date a){
		if(this -> day > a.getDay()){
			return 1;
		}
		if(this -> month > a.getMonth()){
			return 1;
		}
		if(this -> year > a.getYear()){
			return 1;
		}
		return 0;

	}
	
};

#endif

#include "book.h"
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	book b(1,"Prince",10);
	cout<<b.calculatePrice(10);
	cout<<b.getBname();
	cout<<b.getId();
	cout<<b.getPrice();
	return 0;
}


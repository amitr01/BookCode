#include"book.h"
#include<string>
//   book::book(){
//   	bookId=1;
//   	bname="Amit";
//   	price=10;
//   }
   book::book(int bookid,string bookname,double price){
   	this->bookname=bookname;
   	this->bookid=bookid;
   	this->price=price;
   }
	int book::getId(){
		return bookid;
	}
		string book::getBname(){
			return bookname;
		}
		double book::getPrice(){
		return price;
		}
		void book::setId(){
			this->bookid=bookid;
		}
		void book::setBname(){
			this->bookname=bookname;
		}
		void book::setPrice(){
			this->price=price;
		}
	    double book::calculatePrice(int quantity){
	    	
			double res=quantity*this->price;
			return res;
		}
		     

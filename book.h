#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
class book{

	 public: string bookname;
	        int bookid;
	         
	          double price;
	 public:
//	 	   book();
		   book(int bookid,string bookname,double price);
	 public :
	 	int getId();
		string getBname();
		double getPrice();
		void setId();
		void setBname();
		void setPrice();
	    double calculatePrice(int quantity);
		  
		 }
		 
		 ;

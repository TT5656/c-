#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data {
// friend declarations for nonmember functions
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
public:
	// constructors
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p) {}
	Sales_data(std::istream &);
	// member functions
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const;
	// other members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// declarations for nonmember functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif

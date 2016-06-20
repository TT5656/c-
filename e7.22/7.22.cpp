#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <initializer_list>

struct Person {
friend istream &read(istream &is, Person &p);
friend ostream &print(ostream &os, const Person &p);
public:	
	Person() = default;
	Person(const std::string &n, const std::string &a) : name(n), addr(a) {}
	Person(std::istream &);
	std::string read_name() const {return name};
	std::string read_addr() const {return addr};
private:
	std::string name;
	std::string addr;
}

istream &read(istream &is, Person &p);
ostream &print(ostream &os, const Person &p);

istream &read(istream &is, Person &p)
{
	is >> p.name >> p.addr;
	return is;
}

ostream &print(ostream &os, const Person &p)
{
	os << p.read_name() << p.read_addr();
	return os;
}

Person::Person(std::istream &is)
{
	read(is, *this);
}

int main()
{
	return 0;
}

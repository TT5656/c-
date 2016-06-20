#ifndef STRBLOB_H
#define STRBLOB_H

#include <string>
#include <vector>
#include <initializer_lis>
#include <memory>

class StrBlob {
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const std::string &t) { data->push(t); }
	void pop_back();

	std::string& front();
	std::string& back();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
}

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}

#endif

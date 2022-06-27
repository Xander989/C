#include <iostream>
int main() {
	void create_user();
	create_user();
	

}

class Users_
{
public:
	char name;
	int password;
	Users_(const char n, const int p) {
		name = n;
		password = p;

	}

	~Users_() {
		std::cout << "Bye";

	}
	Users_(const Users_& U) {
		name = U.name;
		password = U.password;

	}

	Users_& operator =(const Users_& s) {
		if (&s == this) return *this;
	}

private:

};


void create_user() {
	char n;
	int p;
	std::cin >> n;
	std::cin >> p;
	Users_ U1(n,p);
	std::cout << U1.name;
	std::cout << U1.password;
	Users_ U2 = U1;
	std::cout << U2.name;
	std::cout << U2.password;
}
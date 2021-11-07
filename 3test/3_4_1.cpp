#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	struct People {
		string name;
		int age;
		union {
			int height;
			int weight;
		};
	};
	People people1 = {
		"jackson",
		23,
		{
			.height = 173
		}	
	};
	People people2;
	people2.name = "williams";
	people2.age = 22;
	people2.height = 180;
	cout << "people1 : " << people1.name << people1.age << people1.height << endl;
	cout << "people2 : " << people2.name << people2.age << people2.height << endl;
}

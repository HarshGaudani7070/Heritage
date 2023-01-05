#include<iostream>
using namespace std;

class animal {
	public:
	char  name[100];
	char  age[100];
	void setA() {
	cout<<"Enter animal name :";
	cin>> name;
	cout<<"Enter animal  age :";
	cin>> age;
	cout<<endl;
	}
};
class tiger : public animal {
		public:
			void get1() {				
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
};
class lion : public animal {
		public:
			void get2() {
				cout<<"name="<<name<<endl;
				cout<<"age="<<age<<endl;
			}
			
};

main() {
 	tiger t;
    lion l;
	t.setA();
	l.setA();
	t.get1();
	l.get2();

}

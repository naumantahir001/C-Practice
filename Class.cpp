#include<iostream>
#include<string>
using namespace std;
class boysmath
{
	public:
	int students;
	string subject;
	string section;
	void print(int students, string subject, string section);
};
void boysmath::print(int students, string subject, string section){
	cout<<"numbers of students are "<<students<<". subject is "<<subject<<". and section is "<<section<<endl;
}
class girls : public boysmath{
};
int main(){
	girls g;
	g.print(202, "computer", "royal");
	g.print(209, "bio", "green");
	g.print(215, "arts", "yellow");
}



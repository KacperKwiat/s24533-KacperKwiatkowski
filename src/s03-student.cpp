#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Student
{
	private:
	string imie;
	string nazwisko;
	string indeks;
	int semestr;
	float srednia;
	public:
	Student(std::string im, std::string naz, std::string in, int sm, float sr)
	{
		if(im=="" || naz=="" || in=="" || sm<=0 || sr<0) cout<<"Podales bledne dane";
		else {imie=im; nazwisko=naz; indeks=in; semestr=sm; srednia=sr;}
	}
	void pokaz()
	{
		cout<<imie<<" "<<nazwisko<<" "<<indeks<<" "<<semestr<<" "<<srednia<<"\n";
	}
};
int main()
{
	Student s1("Kacper","Kwiatkowski","s24533",1,4.2);
	s1.pokaz();
	return 0;
}
	

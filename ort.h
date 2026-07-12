#ifndef ORT_H
#define ORT_H
#include <string>
using namespace std;

class Ort{
	private:
		double x;
		double y;
		string name;

	public:
		double get_x() const;
		double get_y() const;
		void print() const;
		void enter_koord();
		void enter_name();
		Ort();
		Ort(string name, double x, double y);

		bool operator==(const Ort& andererOrt) const;
		bool operator!=(const Ort& andererOrt)const;
};
#endif







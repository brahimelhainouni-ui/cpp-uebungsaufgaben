//name : brahim elhainouni
//matrilnummer: 123139
//date : 10.07.2026
#include <iostream>
#include <string>
#include "ort.h"


class Reisen{
	protected: 
		Ort start;
		Ort ziel;
		double  geschwindigkeit;

	public:
		void set_start() {
			cout<<"geben sie start:";
			start.enter_name();
			start.enter_koord();
		}
		string  get_type() const{
			return "Reisen";
		}
		void info(){
			cout<<"start ";
			start.print();
			cout<<"ziel: ";
			ziel.print();
                        cout<<"speed: "<< geschwindigkeit << "km/h "<< endl;
		}
		Reisen(){
		geschwindigkeit = 0.0;
		}
		Reisen(Ort start,Ort ziel,double geschwindigkeit): start(start),ziel(ziel), geschwindigkeit(geschwindigkeit)
};

class Reiten : public Reisen{ 
	private:
		string reittier;



	public:
		Reiten (){
			geschwindigkeit = 5.0;
			reittier = "pferd";
		}
		void choose_animal(){
			cout<<"was wollen sie Reiten \n 1:pferd \n 2: elefanten \n 3:Drachen ";
			int number;
			cin>>  number;
			if (number ==1){
				reittier = "pferd";
                                geschwindigkeit = 5.0;
			}
			else if (number==2){
				reittier = "elefanten";
                                geschwindigkeit = 1.0;
			}
			else if (number == 3){
				reittier = "Drachen"; 
				geschwindigkeit = 60.0;
			}

			else {
				cout<<"ungültige wahle! standard : pferd." << endl;	
		
			}
		}

		Reiten(Ort start,Ort ziel): Reisen(start,ziel,0.0)
		{
		choose_animal();
		}
};
class Laufen : public Reisen{
	private: 
		bool pause;

	public:
		Laufen(){
		geschwindigkeit = 2.5;
		pause = false;
		}
		Laufen(Ort start, Ort ziel, double geschwindigkeit,bool pause): Reisen(start,ziel,geschwindigkeit), pause(pause)
				
};


int main(){

cout<<" \n";cout << "=== STARTE TEST ===" << endl;

}



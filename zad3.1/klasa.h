#ifndef KLASA_H
#define KLASA_H
class Tzespol {
	private:
		double Re, Im;
	public:
		Tzespol() {
			Re = 0;
			Im = 0;
		}
		Tzespol(double Re, double Im) {
			this->Re = Re;
			this->Im = Im;
		}
		void dodaj(Tzespol z);
		void odej(Tzespol z);
		void mnoz(Tzespol z);
		void dziel(Tzespol z);
		void wyœwietl();
};
#endif

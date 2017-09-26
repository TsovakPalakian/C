#ifndef FRACTIONAL_H
#define FRACTIONAL_H

class Fractional {
	private:

		int num;
		int den;
		int int_part;

	public:

		Fractional(void);
		Fractional(int, int);

		void setNum(int num);
		int getNum();
		
		void setDen(int den);
		int getDen();
		
		void setInt_part(int int_part);
		int getInt_part();
		
		Fractional reduction_of_fraction();
		Fractional integer_part();
		Fractional operation(const Fractional&, char&);
};

#endif
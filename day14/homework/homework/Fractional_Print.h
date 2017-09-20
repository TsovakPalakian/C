#ifndef FRACTIONAL_H
#define FRACTIONAL_H
class Fractional {
	private:
		int num;
		int den;
	public:
		Fractional() : num(1), den(1) {};
		Fractional(int num, int den) {
			this -> num = num;
			this -> den = den;
		}
		void setNum(int num) {
			this -> num = num;
		}
		int getNum() {
			return this -> num;
		}
		void setDen(int den) {
			this -> den = den;
		}
		int getDen() {
			return this -> den;
		}
		Fractional operation(const Fractional&, char&);
};
#endif

#ifndef PRINT_H
#define PRINT_H
class Print {
	private:
		Fractional f1;
		Fractional f2;
		Fractional result;
		char math_oper;
	public:
		Print() : math_oper('+') {}
		Print(const Fractional& f1, const Fractional& f2, Fractional& result){
			this -> f1 = f1;
			this -> f2 = f2;
			this -> result = result;
		}
		Print solve(char math_oper) {
			this -> math_oper = math_oper;
			this -> result = f1.operation(f2, math_oper);
			return *this;
		}
		void print();
};
#endif
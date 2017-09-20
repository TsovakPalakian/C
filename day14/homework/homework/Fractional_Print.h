#ifndef OPERATIONAL_H
#define OPERATIONAL_H
class Operational {
	private:
		char oper;
	public:
		Operational() : oper('+'){};
		Operational(char oper){
			this -> oper = oper;
		}
		void setOper(char oper) {
			this -> oper = oper;
		}
		char getOper() {
			return this -> oper;
		}
};
#endif

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
		Fractional operation(const Fractional&, Operational&);
};
#endif

#ifndef PRINT_H
#define PRINT_H
class Print {
	private:
		Fractional f1;
		Fractional f2;
		Fractional result;
		Operational math_oper;
	public:
		Print(const Fractional& f1, const Fractional& f2, const Fractional result){
			this -> f1 = f1;
			this -> f2 = f2;
			this -> result = result;
			this -> math_oper = '+';
		}
		Print(const Fractional& f1, const Fractional& f2, const Fractional result, Operational& math_oper){
			this -> f1 = f1;
			this -> f2 = f2;
			this -> result = result;
			this -> math_oper = math_oper;
		}
		void print();
};
#endif
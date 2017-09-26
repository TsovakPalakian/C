#include<stdio.h>
#include "day4.h"

int num, denom;
void _convert(double n) {
	if ( n >= -999.999999 && n <= 999.999999) {
		double eps = 0.000001;
		double reverse_eps = 1/eps;
		num =  (int)(n * reverse_eps);
		denom = (int)(reverse_eps);
		if (n < 0) {
		}
		while (num % 10 == 0 && denom % 10 == 0) {
			num /= 10;
			denom /= 10;
		}
		while (num % 2 == 0 && denom % 2 == 0) {
			num /= 2;
			denom /= 2;
		}
	} else {
		printf("\n The number is outside the range.\n");
	}
}
int _abs(int n) {
	if (n < 0){
		return -n;
	}
	return n;
}
double _abs(double n) {
	if (n < 0){
		return -n;
	}
	return n;
}
int numerator(double n) {
	if ( n >= -999.999999 && n <= 999.999999) {
		_convert(n);
	} else {
		printf("\n The number is outside the range.\n");
		return 0;
	}
	return num;
}
int denominator(double n) {
	if ( n >= -999.999999 && n <= 999.999999) {
		_convert(n);
	} else {
		printf("\n The number is outside the range.\n");
		return 0;
	}
	return denom;
}
double _power(int a, int n) {
	double result = 1;
	for (int i = 0; i < _abs(n); ++i) {
		result *= _abs(a);
	}
	return result;
}

double power(double a, int n) {
	double result = 1;
	_convert(a);
	if (a > 0) {
		if (n > 0) {
			return result = _power(num,n)/_power(denom,n);
		}
		if (n < 0) {
			return result = _power(denom,n)/_power(num,n);
		}
	}
	if (a < 0) {
		if (n > 0) {
			if (n % 2 == 0) {
				return result = _power(num,n)/_power(denom,n);
			} else {
				return result = -_power(num,n)/_power(denom,n);
			}
		}
		if (n < 0) {
			if (n % 2 == 0) {
				return result = _power(denom,n)/_power(num,n);
			} else {
				return result = -_power(denom,n)/_power(num,n);
			}
		}
	}
	if (!a) {
		if (n > 0) {
			return result = 0;
		}
		if (!n) {
			return result = 1;
		}
		if (n < 0) {
			printf("\n Invalid input\n");
			return result = 0;
		}
	}
	return result;
}
double _sqrt(int number, int deg, int deg_root) {
	double x1, x0 = 1.0, g, eps = 0.000001;	
	double an = _power(number,deg);

	x1 = (double)1/deg_root * (deg_root - 1 + an/power(x0, deg_root)) * x0;
	do {
		g = x1;

		x1 = (double)1/deg_root * ((deg_root - 1) + an/power(x1, deg_root)) * x1;

	} while (_abs(x1 - g) >= eps);
	return x1;
}
double _sqrt(double number) {
	double x1, x0 = 1.0, g, eps = 0.000001;	

	x1 = (double)1/2 * (2 - 1 + number/power(x0, 2)) * x0;
	do {
		g = x1;

		x1 = (double)1/2 * ((2 - 1) + number/power(x1, 2)) * x1;

	} while (_abs(x1 - g) >= eps);
	return x1;
}
double power(int a, int n) {
	double result = 1.0;
	if (a > 0) {
		if (n > 0) {
			return result = _power(a, n);
		}
		if (n < 0) {
			return result = 1/_power(a, n);
		}
	}
	if (a < 0) {
		if (n > 0) {
			return result = (n % 2 == 0) ? _power(a, n) : -_power(a, n);
		}
		if (n < 0) {
			return result = (n % 2 == 0) ? 1/_power(a, n) : -1/_power(a, n);
		}
	}
	if (!a) {
		if (n > 0) {
			return result = 0;
		}
		if (!n) {
			return result = 1;
		}
		if (n < 0) {
			printf("\n Invalid input\n");
			return result = 0;
		}
	}	
	return result;
}
double power(int a, double n) {
	double result = 1.0; 
	_convert(n);
	if (a > 0) {
		if (n > 0) {
			return result = _sqrt(a, num, denom);
		}
		if (n < 0) {
			return result = 1/_sqrt(a, num, denom);
		}
	}
	if (a < 0) {
		if (n > 0) {
			if (num % 2 == 0){ 
				return result = _sqrt(a, num, denom);
			} else {
				if (denom % 2 == 0) {
					printf("\n Invalid input\n");
					return 0.0;
				} else {
					return result = -_sqrt(a, num, denom);
				}
			}
		}
		if (n < 0) {
			if (num % 2 == 0){ 
				return result = 1/_sqrt(a, num, denom);
			} else {
				if (denom % 2 == 0) {
					printf("\n Invalid input\n");
					return 0.0;
				} else {
					return result = -1/_sqrt(a, num, denom);
				}
			}
		}
	}
	if (!a) {
		if (n > 0) {
			return result = 0.0;
		}
		if (!n) {
			return result = 1.0;
		}
		if (n < 0) {
			printf("\n Invalid input\n");
			return result = 0.0;
		}
	}
	return result;
}


double power(double a, double n) {
	double result = 1;
	_convert(a);
	int x = num;
	int y = denom;
	_convert(n);
	int p = num;
	int m = denom;

	if (a > 0) {
		if (n > 0) {
			return result = _sqrt(x, p, m)/_sqrt(y, p, m);
		}
		if (n < 0) {
			return result = _sqrt(y, p, m)/_sqrt(x, p, m);
		}
	}
	if (a < 0) {
		if (n > 0) {
			if (p % 2 == 0){ 
				return result = _sqrt(x, p, m)/_sqrt(y, p, m);
			} else {
				if (denom % 2 == 0) {
					printf("\n Invalid input\n");
					return 0.0;
				} else {
					return result = -_sqrt(x, p, m)/_sqrt(y, p, m);
				}
			}
		}
		if (n < 0) {
			if (p % 2 == 0){ 
				return result = _sqrt(y, p, m)/_sqrt(x, p, m);
			} else {
				if (denom % 2 == 0) {
					printf("\n Invalid input\n");
					return 0.0;
				} else {
					return result = -_sqrt(y, p, m)/_sqrt(x, p, m);
				}
			}
		}
	}
	if (!a) {
		if (n > 0) {
			return result = 0.0;
		}
		if (!n) {
			return result = 1.0;
		}
		if (n < 0) {
			printf("\n Invalid input\n");
			return result = 0.0;
		}
	}
	return result;

}
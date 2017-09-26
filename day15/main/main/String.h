#ifndef STRING_H
#define STRING_H
class String {
	private:
		char *str;
		int len;
	public:
		void setStr( char* );
		int getLen(void) const {return len;}
		char* getStr(void) const {return str;}
};
#endif
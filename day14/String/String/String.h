#ifndef STRING_H
#define STRING_H
class String{
	private:
		char *str;
		int len; 
	public: 
		String( void); 
		String( char*); 
		String( const String&); 
		void Set_str (char*); 
		int Get_len( void )const{  return len;  }
		char* Get_str( void )const{  return str;  }
		void show( void ) const; 
		~String(void); 
};
#endif
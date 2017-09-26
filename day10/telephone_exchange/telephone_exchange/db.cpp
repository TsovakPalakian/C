#include "te_struct.h"

extern const int N = 3;

Person per[N] = {
					{"Gayk", "Palakian"},
					{"Sevak", "Palakian"}, 
					{"Tsovak", "Palakian"}
				};

Address addr[N] = {
					  {"Moscow", "17/25", "Clodt M.K. str."},
					  {"Moscow", "7/217", "Kramskoi I.N. str."},
					  {"Minsk", "2/239", "Vasnetsov V.M. str."}
				  };

Phone_Number pho[N] = {  
						  {7, 967, 1493461},  
						  {7, 926, 1433461},
						  {375, 25, 7018079}
					  };

tm tOn[N] = { 
				 {43, 15, 19, 10, 9, 2017},
				 {4, 46, 9, 9, 10, 2017},
				 {3, 9, 14, 17, 4, 2017}
			};

tm tOf[N] = {
				 {1, 56, 19, 10, 9, 2017},
				 {4, 50, 9, 9, 10, 2017},
				 {7, 3, 15, 17, 4, 2017}
			};

Tariff tar[N] = {
					{1.96},
					{15.25},
					{46.16}
				};

extern TelephoneExchange te[10] = {
								      {per[0], addr[0], pho[0], per[2], addr[2], pho[2], tOn[0], tOf[0], tar[1]},
								      {per[1], addr[1], pho[1], per[0], addr[0], pho[0], tOn[2], tOf[2], tar[0]},
								      {per[2], addr[2], pho[2], per[1], addr[1], pho[1], tOn[1], tOf[1], tar[2]}
								  };
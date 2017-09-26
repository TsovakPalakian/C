#include "te_struct.h"

void _swap(TelephoneExchange *pte, int i, int j) {
	TelephoneExchange tmp;
	tmp = pte[i];
	pte[i] = pte[j];
	pte[j] = tmp;
}
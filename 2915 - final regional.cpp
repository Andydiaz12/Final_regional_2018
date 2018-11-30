#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int numero, temp_1 = INT_MIN, actual, respuesta;
	
	scanf("%d", &numero);
	respuesta = numero;
	
	while(numero--){
		scanf("%d", &actual);
		if(actual <= temp_1)
			respuesta--;
		temp_1 = actual;
	}
	
	printf("%d\n", respuesta);
	
	return 0;
}

#include <iostream>
#include<cstring>
#include "Solicitud.h"
#include <time.h>
//



using namespace std;
int main(int argc, char* argv[]) {
  srand(time(NULL));
  int contador = 0;
  int n = atoi(argv[2]);
  int transaccion;
  while (contador<n) {
	int num= 1 + rand() % 9;;

  transaccion=num;
	int numRespuesta;
	Solicitud solicitud;
	//strcpy(numRespuesta,solicitud.doOperation(argv[1],7200,1,(char*)&num));
	memcpy(&numRespuesta,solicitud.doOperation(argv[1],7200,1,(char*)&num),2*sizeof(int));

	//solicitud.prueba(10);
	//memcpy(&numRespuesta,solicitud.doOperation(argv[1],6666,1,(char*)&num),10);
	//cout<<numRespuesta<<endl;
  //cout << " Transaccion: "<<contador<<" Cantidad: "<<num<<" Total: "<<numRespuesta<<endl;

	printf("Transaccion:%d\nCantidad:%d\nTotal:%d\n", contador, transaccion,numRespuesta);
  contador++;
  }
	return 0;
}

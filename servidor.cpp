#include <iostream>
#include<cstring>
#include "Respuesta.h"

using namespace std;

int main() {
    Respuesta resp = Respuesta(7200);
    struct mensaje* msg;
    int total = 0;
    int contador=0;

      cout<< "Esperando Respuesta:"<<endl;
    while(1){
      int numeros;
      msg=resp.getRequest();
      //sscanf(msg->arguments, "%d %d", &a, &b);
        //memcpy((char*)a,msg->arguments, 2*sizeof(int));

          //memcpy((char*)b,msg->arguments, 2*sizeof(int));
        //strcpy(&numeros,&msg->arguments);
        memcpy(&numeros,&msg->arguments, 2*sizeof(int));
      total = total+numeros;

      cout << " Cantidad: "<<numeros<<" Total: "<<total<<endl;
      cout<<total<<endl;

        resp.sendReply(&total);
    }
}

/*
int main() {
    Respuesta resp = Respuesta(7200);
    int nbd = 0;
    int total = 0;
    int respuesta[2];
    struct mensaje *msg;


    while (1) {

      int arreglo[2];
        cout << "Esperando Respuesta:" << endl;
        msg = resp.getRequest();
        memcpy(&arreglo, &msg->arguments, sizeof(int));
        total = total + arreglo[1];
        cout << "Transaccion numero: "<<arreglo[0] <<" Se recibio una transferencia por: " << arreglo[1] << " El total de la cuenta es: " << total << endl;
        respuesta[0] = arreglo[1];
        respuesta[1] = total;
        resp.sendReply((int *) &respuesta);


    }

}
*/
//(char *) num

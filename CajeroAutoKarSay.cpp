#include <iostream>
#include <string.h>
using namespace std;

//Karla Say :D

double ba = 1000, dep, re;
string nom, cont;
string nomc = "User_25", contc = "1234";
int op;
    
int main() {
    
    do {
        cout<<"Ingrese su nombre de usuario: ";
        cin>>nom;
        if (nom == nomc){
            cout<<"Usuario aceptado"<<endl;
        }else{
            cout<<"Usuario invalido, intenta de nuevo!"<<endl;
        }
    }while (nom != nomc);
    
    do{
        cout<<"Ingrese su contrasena: ";
        cin>>cont;
        if (cont == contc){
        	system ("cls");
            cout<<"Contrasena aceptada. Bienvenido al sistema!"<<endl;
        }else{
        	system ("cls");
            cout<<"Contrasena incorrecta, intenta de nuevo!"<<endl;
        }
    } while (cont != contc);
    
    do{
        cout<<"----Cajero automatico----"<<endl;
        cout<<"   1. Depositar" << endl;
        cout<<"   2. Retirar" << endl;
        cout<<"   3. Consultar saldo"<<endl;
        cout<<"   4. Salir" << endl;
        cout<<"Recuerde que su saldo inicial es de 1000!"<<endl; 
        cout<<"Seleccione una opcion: ";
        cin>>op;
        
        switch (op){
            case 1:
            	system ("cls");
            	do{
                cout<<"   -------Depositar------"<<endl;
                cout<<"Ingrese cantidad a depositar: ";
                cin>>dep;
                if (dep <= 0){
                	system ("cls");
                    cout<<"Cantidad invalida :C, ingrese otra!"<<endl;
                }else{
                    ba = ba + dep;
                    system ("cls"); 
                    cout<<"Ha depositado correctamente"<<endl;
                    cout<<"Su saldo es: "<<ba<<endl;
                }
                }while (dep<=0);
                break;
            
            case 2:
            	system ("cls");
            	do{
                cout<<"   -------Retirar-------"<<endl;
                cout<<"Ingrese la cantidad a retirar: ";
                cin>>re;
                if (re>ba){
                	system ("cls");
                    cout<<"Saldo Insuficiente :C, Intente de nuevo!"<<endl;
				}else if (re<=0){
					system ("cls");
					cout<<"Cantidad invalida, intente de nuevo!"<<endl; 
				}else{
                    ba= ba - re;
                    system ("cls");
                    cout<<"Ha retirado correctamente!"<<endl;
                    cout<<"Su saldo es: "<<ba<<endl;
                }
            	}while (re>ba or re<=0); 
                break;
            
            case 3:
            	system ("cls");
                cout<<"----Consultar saldo----"<<endl;
                cout<<"Su saldo actual es de: "<<ba<<endl;
                break;
            
            case 4:
                cout<<"Gracias por usar el cajero!"<<endl;
                cout<<"Vuelva pronto! :D"<<endl;
                break;
            
            default:
            	system ("cls");
                cout<<"Esta opcion no existe, intenta con otro!"<<endl;
        }
    } while (op != 4);
    
    return 0;
}

#include <iostream>
#include <unistd.h>
using namespace std;

int main() {

  cout << "Elija una opcion:" <<endl;
  cout << "1) Verificar interfaces de red" <<endl;
  cout << "2) Verificar conectividad con google.es" <<endl;
  cout << "3) Abrir Wireshark" << std::endl;
  cout << "4) Abrir Tcpdump" << std::endl;
  cout << "5) Verificar versión del kernel" <<endl;
  cout << "6) Verificar nombre del dispositivo" <<endl;

  int opcion;
  cin >> opcion;

  switch (opcion) {
  
    case 1:
      system("ip addr show");
      break;
    case 2:
      system("ping -c 3 google.es");
      break;
    case 3:
      system("wireshark &");
      break;
    case 4:
      system("tcpdump");
      break;
    case 5:
      system("uname -r");
      break;
    case 6:
      system("hostname");
      break;
    default:
      cout << "Opción inválida";
    
}

	  
	  return 0;
	  

      
   }
      


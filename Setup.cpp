#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   system("sudo apt-get update");
   system("sudo apt-get install wireshark");
   system("sudo apt-get install tcpdump");
   cout << "Wireshark y TCPDump han sido instalados." << endl;
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num,res;
    char opc;
    begin:
    system("cls");
    cout << "Digite o numero para saber a tabuada: ";
    cin >> num;
    for(int i=1; i<=10; i++){
        res=num*i;
        cout << num << "X" << i << "= " << res << endl;
    }
    cout << "Deseja fazer de outro numero? [s/n]" << endl;
    cin >> opc;
    if (opc == 'S' || opc == 's'){
        goto begin;
    }
 
    return 0;
}
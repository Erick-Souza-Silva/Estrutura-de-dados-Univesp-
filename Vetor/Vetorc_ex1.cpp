#include <iostream>
using namespace std;
int main(){
    int num_elem;

    cout << "Digite o tamanho do vetor";
    cin >> num_elem;

    int* c = new int[num_elem];

for (int i = 0; i < num_elem; i++){
    c[i] = 2*i;
}

for(int i = 0; i < num_elem; i++){
    cout << "c[" << i << "]=" << c[i] << "\n";
}
return 0;
}

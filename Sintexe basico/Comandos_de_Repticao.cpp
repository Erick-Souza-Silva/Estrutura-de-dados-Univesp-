#include <iostream>

using namespace std;
int main(){
int number1;
int total;
int counter = 0;
int amount = 0;

while(counter < 10){
    std::cout << "Digite um numero: (" << counter << ")" << std::endl;
    std::cin >> number1;

    if (number1 < 5){
        amount++;
    }
    counter++;
}




for (int number = 2; number <= 20; number += 2)
    total += number;

    cout << "A soma da série e " << total << endl;

    int cc;
    int nu;
    int sum;

    do{
        cout << "Insira um novo numero:" << endl;
        cin >> nu;

        sum+= nu;
        cc++;

    } while(nu != 0);

    float average = (float)sum/(float)(cc-1);
    cout << "Media da serie é:" << average << endl;
}

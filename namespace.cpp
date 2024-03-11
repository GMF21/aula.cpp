#include <iostream>

using namespace std;

namespace first_space
{
    void func(){
        cout << "Inside first space" << endl;

    }
}

namespace second_space
{
    void func(){
        cout << "Inside second space" << endl;
    }

}

using namespace first_space


int main(){

first_space::func();

second_space::func(); //chamar a funcao com o namespace 2 , ou seja - Nome do namespace :: e nome da função//


}

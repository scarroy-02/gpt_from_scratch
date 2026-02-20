#include <iostream>
#include "../include/Neuron.hpp"

using namespace std;

int main(int argc, char **argv) {
    Neuron *n = new Neuron(1.5);
    cout << n->getVal() << endl;
    cout << n->getActivatedVal() << endl;
    cout << n->getDerivedVal() << endl;

    return 0;
}
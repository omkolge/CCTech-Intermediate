#include <iostream>
#include<cassert>
#include "Echo.h"
#include<string.h>

using namespace std;

int main(){
    assert(echo_Command("")=="\n");
    assert(echo_Command("Foo")=="\nFoo");
    assert(echo_Command("Foo command")=="\nFoo command");
    assert(echo_Command("Foo")=="\nFoo command");
    return EXIT_SUCCESS;
}  
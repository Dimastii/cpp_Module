#include "Pony.h"

void ponyOnTheHeap() {
    Pony p("jogs", "star", "crooked");
    p.ponyInit();
    p.ponyRun("HEAP");
}

void ponyOnTheStack() {
    Pony *p = new Pony("jogs", "star", "crooked");
    p->ponyInit();
    p->ponyRun("STACK");
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}

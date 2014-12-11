#ifndef CONCRETE_H
#define CONCRETE_H
#include "Abstract.h"
#include "Callbacks.h"
class Callbacks;
class AnonymousClass;

class Concrete : Abstract {
private:
    AnonymousClass* DAClass; //use universal lambda to add new class
public:
    void setAnonymousClass(AnonymousClass* ac);
    AnonymousClass* getAClass();

    void implementMe();
    Callbacks* enclosed;
    Concrete();
    Concrete(Callbacks* cb);

};

#endif // CONCRETE_H

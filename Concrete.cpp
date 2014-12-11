#include "Concrete.h"
#include "Callbacks.h"
#include <QDebug>
Concrete::Concrete() {}


Concrete::Concrete(Callbacks* cb) : enclosed(cb) {
    qDebug() << "Created concrete";
}

void Concrete::implementMe() {
    enclosed->doSomething(); //enclosed
}

void Concrete::setAnonymousClass(AnonymousClass *ac) {
    DAClass = ac;
}

AnonymousClass* Concrete::getAClass() {
    return DAClass;
}

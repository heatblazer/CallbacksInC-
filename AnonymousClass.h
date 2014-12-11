#ifndef ANONYMOUSCLASS_H
#define ANONYMOUSCLASS_H
class AnonymousClass;
class Callbacks;
class AnonymousClass {

public:
    Callbacks* factories;
    AnonymousClass(Callbacks* cb);
    AnonymousClass();
    virtual ~AnonymousClass()=0;
    virtual void say()=0;
};

#endif // ANONYMOUSCLASS_H

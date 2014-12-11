#ifndef CALLBACKS_H
#define CALLBACKS_H
typedef void(*dosth)(void);
class Callbacks {
public:
    dosth doSomething;
    Callbacks(dosth);
};

#endif // CALLBACKS_H

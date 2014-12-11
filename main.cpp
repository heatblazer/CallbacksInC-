#include <QCoreApplication>
#include "Concrete.h"
#include <iostream>
#include <cstdio>
#include <QDebug>
#include "AnonymousClass.h"
#define SAY() printf("I SAY\n")


AnonymousClass* setAClass();
/* simulate lambdas */

/* this code has js equvalent of
 * callbacker(function() { console.log("some foo");});
 *callbacker(function() { for(var a=0; a < 100; a++); });
 * callbackers(cb) { cb(); }
 *
 *
*/

static inline void printWithCout() {
    int unitialized;
    std::cout << "cout << " << unitialized++ <<" some random val\n";



}

static inline void printWithprintf() {
    char c;
    int i=0;
    printf("%c some unitialized char\n", c++);
}

static inline void printWQdebg() {
    qDebug() << "just qDebug()...";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Concrete c1(new Callbacks(printWithCout));
    Concrete c2(new Callbacks(printWithprintf));
    Concrete c3(new Callbacks(printWQdebg));

    c1.implementMe();
    c2.implementMe();
    c3.implementMe();
    c3.setAnonymousClass(setAClass());
    c3.getAClass()->say();
    return a.exec();
}


AnonymousClass* setAClass() {
    std::cout << "Inside setAClass()\n";
    struct ooof : AnonymousClass {
    public:
       ooof(){
            std::cout << "ooof()\n";
        }
        ~ooof() {
            std::cout << "~ooof()\n";
        }
        void say() {
            std::cout << "ooof::say()\n";
            delete this;
            exit(1);
        }
    };

    return (AnonymousClass*)new ooof();
}

#ifndef veicoli_H
#define veicoli_H
#include <iostream>
using namespace std;

class Veicolo{
    protected:
    int cilindrata;
    string type;
    public:
    Veicolo(int cilindrata,string type):cilindrata(cilindrata),type(type){}
    int getCilindrata(){return this->cilindrata;}
    ostream& put(ostream& os){
        os << "Tipo:" <<type << ", cilindrata= " <<getCilindrata() << endl;
        return os;
    }
};
ostream& operator<<(ostream& os,Veicolo& obj){
    return obj.put(os);
}
class Auto:public Veicolo{
    public:
    Auto(int cilindrata,string type):Veicolo(cilindrata,type){}
};
class Moto:public Veicolo{
    public:
    Moto(int cilindrata,string type):Veicolo(cilindrata,type){}
};
class Barca:public Veicolo{
    public:
    Barca(int cilindrata,string type):Veicolo(cilindrata,type){}
};
#endif
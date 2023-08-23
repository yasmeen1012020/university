#include <iostream>

using namespace std;

class Singleton{
private:
    string name;
    int age;
    static Singleton *instancePtr;
    Singleton(){}
public:
    Singleton(const Singleton& obj) = delete;
    static Singleton *getInstance(){
        if(instancePtr == NULL){
            instancePtr = new Singleton();
            return instancePtr;
        }
        else{
            return instancePtr;
        }
    }

    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    void print(){
        cout<<"Name: "<<name<<", age: "<<age<<endl;
    }
};

Singleton* Singleton::instancePtr = NULL;

int main()
{
    Singleton *s = Singleton::getInstance();
    s->setAge(10);
    s->setName("I am a Singleton");
    s->print();
    cout<<s<<endl;

    Singleton *x = Singleton::getInstance();
    x->setName("I am a new Singleton");
    x->setAge(5516880);
    x->print();
    cout<<x<<endl;
    return 0;
}

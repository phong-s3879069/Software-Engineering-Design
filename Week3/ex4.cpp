#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Cat
{
public:
    string name;
    int age;
    Cat() {};
    Cat(string _name, int _age)
    {
        name = _name;
        age = _age;
    }

    void get_info() {
        std::cout << "Cat's name: " << name << "\nCat's age: " << age << "\n";
    }
};

class Person
{
public:
    Cat cat;
    string name;
    Person(){};
    Person(Cat _cat, string _name)
    {
        cat = _cat;
        name = _name;
    }

    void get_info() {
        cat.get_info();
        std::cout << "Person name: "<< name;
    }
};

int
main()
{
    Cat cat1("cat1", 18);
    Cat cat2("cat2", 30);
    Cat cat3("cat3", 89);

    Person people[3] = { Person(cat1, "Phong"),
                         Person(cat2, "Bong"),
                         Person(cat3, "Dat") };

    int highest_age = people[0].cat.age;
    int index = 0;
    
    for (int i = 0; i < 3; i++) {
        if (highest_age < people[i].cat.age) {
            highest_age = people[i].cat.age;
            index = i;
        }
    };

    people[index].get_info();
                    

    return 0;
}
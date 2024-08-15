#include <iostream>
#include <string>

using namespace std;

class Robot {
public:
    Robot(string name, int version_number)
        : name(name), version_number(version_number),
          internal_temperature(30.0) 
    {
    }
    void get_info(){
        std::cout << "My name is " << name << " .My version : " << version_number << std::endl;
    }

private:
    string name;
    int version_number;
    double internal_temperature;
};

int main()
{
    Robot robot_1("SPARK-66", 2);
    robot_1.get_info();
    return 0;
}

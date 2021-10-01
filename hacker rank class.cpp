#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    
    void set_age(int a){
        age=a;
    }
    void set_standard(int s){
        standard=s;
    }
    void set_first_name(string fn){
        first_name=fn;
    }
    void set_last_name(string ln){
        last_name=ln;
    }
    void get_age(void){
        cout<<age;
    }
    void get_standard(){
        cout<<standard;
    }
    string get_last_name(void){
        return last_name;
    }
    string get_first_name(void){
        return first_name;
    }
    string to_string() {
          stringstream ss;
          ss << age << "," << first_name << "," << last_name << "," << standard;
          return ss.str();
      }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

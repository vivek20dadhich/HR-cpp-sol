#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int a, s;
        string f, l;
    public:
        void set_age(int age){
            a = age;
        }
        int get_age(){
            return a;
        }
    public:
        void set_first_name(string first_name){
            f = first_name;
        }
        string get_first_name(){
            return f;
        }
    public:
        void set_last_name(string last_name){
            l = last_name;
        }
        string get_last_name(){
            return l;
        }
    public:
        void set_standard(int standard){
            s = standard;
        }
        int get_standard(){
            return s;
        }
    public:
        string to_string(){
            stringstream ss;
            ss << a << "," << f << "," << l << "," << s;
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

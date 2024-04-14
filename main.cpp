#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.14;

class myClass{
    private:
        int val;
        float num;
        string name;

    protected:
        int grade;

    public:
        void assign();
        void retrive();
};

class myChild : myClass {
    public:
        void setGrade();
        void checkGrade();
};

void print_statement();

void data_ype();

void character_type();

void scope_variable();

void user_input();

void operator_operation();

void string_operations();

void math_functions();

void condition();

void for_loop();

// Pointer Work
void swap(int *x, int *y);

// Recursion Work
int factorial(int n);

void array_operations();

void raising_exeption();

int main() {
    
    return 0;
}

void print_statement() {
    std::cout << "Hello, World!" << std::endl;
    cout << "HI \n";
    cout << "HI,\tagain I am saying" << endl;
}

void data_ype() {
    int num1 = 10;
    float num2 = 10.2;
    double sum;
    sum = num1 + num2;
    char character = 'a';
    string myName = "Rahul";
    bool isAudult = true;

    cout << "The sum of the two numbers is " << sum << endl;
    cout << "The character I have taken " << character << endl;
    cout << "My name is " << myName << endl;
    cout << "I am adult " << isAudult << endl;
}

void character_type() {
    char a = 'a';
    wchar_t b = L'b';
//    char8_t c = u8'C';
    char16_t d = u'd';
    char32_t e = U'e';
    char x = 65, y = 66, z = 67;

    cout << "char " << a << endl;
    wcout << "wchar_t " << b << endl;
//    std::cout << "chat8_t " << static_cast<int>(c) << std::endl;
    cout << "char16_t " << static_cast<char>(d) << endl;
    cout << "char16_t " << static_cast<char>(e) << endl;
    cout << "x " << x << endl;
    cout << "y " << y << endl;
    cout << "z " << z << endl;
}

void scope_variable() {
    int local = 10;
    cout << "The global value is " << PI << endl;
    cout << "The local value is " << local << endl;
//    PI = 30.2; We can not assign the value of a constant variable or read-only variable
//    cout << "The global value is " << PI << endl;
}

void user_input() {
    int x;
    string myName;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "You have entered " << x << endl;
    cout << "Enter your name: ";
    cin >> myName;
    cout << "Your name is " << myName;
}

void operator_operation() {
    int x = 10;
    int y = 5;
    cout << "Arithmetic Operator: " << endl;
    cout << "Addition " << x + y << endl;
    cout << "Subtraction " << x - y << endl;
    cout << "Multiplication " << x * y << endl;
    cout << "Division " << x / y << endl;
    cout << "Modulus " << x % y << endl;
    cout << "Pre Increment " << ++x << endl;
    cout << "Post Increment " << x++ << endl;
    cout << "x " << x << endl;
    cout << "Pre Decrement " << --x << endl;
    cout << "Post Decrement " << x-- << endl;
    cout << "x " << x << endl;
    cout << "Logical Operator: " << endl;
    cout << "And " << ((x > 5) && (y < 10)) << endl;
    cout << "Or " << ((x > 5) || (y > 5)) << endl;
    cout << "Bitwise Operator: " << endl;
    cout << "AND " << (x & y) << endl;
    cout << "OR " << (x | y) << endl;
    cout << "NOT " << (~x) << endl;
    cout << "Left Shift " << "x<<1 " << (y << 1) << endl;
    cout << "Right Shift " << "x>>1 " << (y >> 1) << endl;
    cout << "Left Shift " << "x<<2 " << (y << 2) << endl;
    cout << "Right Shift " << "x>>2 " << (y >> 2) << endl;
}

void string_operations() {
    string firstName = "Rahul";
    string lastName = "Das";
    string fullName1 = firstName + lastName;
    string fullName2 = firstName.append(lastName);
    cout << fullName2 << endl;
    cout << "Length " << fullName1.length() << endl;
    cout << "Size " << fullName1.size() << endl;
    cout << "5 th position value of the string: " << fullName1[5] << endl;
    string myWord1 = "It\'s me Rahul aka \"Programmer\".";
    string myWord2 = R"(It's me Rahul aka "Programmer".)";
    cout << myWord1 << endl;
    cout << myWord2 << endl;
    string yourName;
    cout << "Enter you name: ";
    getline(cin, yourName);
    cout << "Your name is " << yourName << endl;
}

void math_functions() {
    int a = -5;
    int b = 125;
    int d = 25;
    float c = 5.4;
    cout << "Abs of " << a << " : " << abs(a) << endl;
    cout << "Cube root of " << b << " : " << cbrt(b) << endl;
    cout << "Root of " << d << " : " << sqrt(d) << endl;
    cout << "Log(2): " << log(2) << endl;
    cout << "Round of " << c << " : " << round(c) << endl;
    cout << "Round of nearest up value of " << c << " : " << ceil(c) << endl;
    cout << "Round of nearest down value of " << c << " : " << floor(c) << endl;
    cout << "5 to the power of 2 is: " << pow(abs(a), 2) << endl;
    cout << "Min value: " << min(b, d) << " Max value: " << max(b, d) << " between " << b << " and " << d << endl;
}

void condition() {
    int x = 10;
    int vote = 20;
    if (x > 0) {
        cout << "x is positive" << endl;
    } else if (x == 0) {
        cout << "x is zero" << endl;
    } else {
        cout << "x is negative" << endl;
    }
    cout << "Your are " << ((vote >= 18) ? "" : "not ") << "eligible for vote." << endl;
}

void for_loop() {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    string myName = "Rahul Das";
    for (char c: myName) {
        cout << c << "\t";
    }
}

void array_operations() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < (sizeof(cars) / sizeof(string)); i++) {
        cout << i << " = " << cars[i] << "\n";
    }
    int matrix1[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9,}
    };
    int matrix2[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9,}
    };
    int resultMatrix[3][3];
    int result;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result = 0;
            for (int k = 0; k < 3; ++k) {
                result += matrix1[i][k] * matrix2[k][j];
            }
            resultMatrix[i][j] = result;
        }
    }

    cout << "Matrix1: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix1[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Matrix2: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix2[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Result Matrix: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << resultMatrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

void swap(int *x, int *y){
    int temp;
    temp = (*x);
    *x = *y;
    *y = temp;
}

int factorial(int n){
    if (n == 1 or n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

void myClass :: assign(){
    cout << "Enter a integer";
    cin >> val;
    cout << "Enter a float";
    cin >> num;
    cout << "Enter your name";
    cin >> name;
}

void myClass ::retrive() {
    cout << "The integer is " << val << endl;
    cout << "The float is " << num << endl;
    cout << "Name is " << name << endl;
}

void myChild :: setGrade() {
    cout << "Enter your grade";
    cin >> grade;
}

void myChild ::checkGrade() {
    cout << "The grade is " << grade << endl;
}

void raising_exeption(){
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Age is: " << myNum;
    }
}
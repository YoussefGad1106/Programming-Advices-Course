#include <iostream>
using namespace std;


enum Gender {Male = 1, Female = 0 };
enum Status {Single = 0, Married = 1 };
enum FavColor {Red, Blue, Green, Yellow, Black };


struct Address
{
    string Country, City, Street;
};

struct ContactInfo
{
    string Email, Phone, FaceBook, PoBox;
};


struct UserInfo
{
    string Name;
    short Age;
    double MonthlySalary;
    Gender gender;
    Status isMarred;
    Address Address;
    ContactInfo ContactInfo;
    FavColor Color;
};



int main()
{
    UserInfo User1;

    User1.Name = "Youssef Gad";
    User1.Age = 20;
    User1.gender = Gender::Male;
    User1.isMarred = Status::Single;
    User1.MonthlySalary = 25000;
    User1.Address.Country = "Egypt";
    User1.Address.City = "Alexandria";
    User1.Address.Street = "El-Hoda street";
    User1.Color = FavColor::Black;
    User1.ContactInfo.Email = "Youssef@gmail.com";
    User1.ContactInfo.FaceBook = "YoussefGad@yahoo.com";
    User1.ContactInfo.Phone = "01202849698";
    User1.ContactInfo.PoBox = "0364963";


    cout << "***************************************************************************************\n";
    cout << "Name: " << User1.Name << endl;
    cout << "Age: " << User1.Age << endl;
    cout << "City: " << User1.Address.City << endl;
    cout << "Country: " << User1.Address.Country << endl;
    cout << "The street : " << User1.Address.Street << endl;
    cout << "Mothly Salary: " << User1.MonthlySalary << endl;
    cout << "Yearly Salary: " << User1.MonthlySalary * 12 << endl;
    cout << "Gender: " << User1.gender << endl;
    cout << "Married: " << User1.isMarred << endl;
    cout << "Favourite Color: " << User1.Color << endl;
    cout << "The E-Mail : " << User1.ContactInfo.Email << endl;
    cout << "The Facebook account : " << User1.ContactInfo.FaceBook << endl;
    cout << "The Post box number : " << User1.ContactInfo.PoBox << endl;
    cout << "***************************************************************************************\n";



    return 0;




}
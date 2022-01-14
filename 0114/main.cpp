#include <QCoreApplication>
#include <iostream>

struct date
{
    int day;
    int mouth;
    int year;
};

void print(date d){
    std::cout << d.day << "." << d.mouth
              << "." << d.year << std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    date today;
    today.day = 14;
    today.mouth = 1;
    today.year = 2022;

    print(today);

    return a.exec();
}

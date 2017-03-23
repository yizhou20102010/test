#include <QCoreApplication>
#include<boost/lexical_cast.hpp>
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"hello world! "<<endl;
    using boost::lexical_cast;
    auto b=lexical_cast<int>("123");
    auto c=lexical_cast<double>("123.4567890");
    cout<<b<<endl<<c<<endl;

    return a.exec();
}

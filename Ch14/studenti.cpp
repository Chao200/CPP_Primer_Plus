#include "studenti.h"

Student::~Student()
{}
 
double
Student::Average() const
{
    // return scores.size() > 0 ? scores.sum() / scores.size() : 0;
    return ArrayDb::size() > 0 ? ArrayDb::sum() / ArrayDb::size() : 0;
}

const std::string& 
Student::Name() const
{
    // return name;
    return (const std::string&) *this;
}

double& 
Student::operator[](int i)
{
    // return scores[i];
    return ArrayDb::operator[](i);
}

double
Student::operator[](int i) const
{
    // return scores[i];
    return ArrayDb::operator[](i);
}

std::ostream& 
Student::arr_out(std::ostream& os) const
{
    int i;
    // int lim = scores.size();
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; ++i)
        {
            // os << scores[i] << " ";
            os << ArrayDb::operator[](i);
            if (i % 5 == 4) os << std::endl;
        }
        if (i % 5 != 0) os << std::endl;
    }
    else
    {
        os << " empty array ";
    }
    return os;
}

std::istream& 
operator>>(std::istream& is, Student& stu)
{
    // is >> stu.name;
    is >> (std::string&) stu;
    return is;
}

std::istream& 
getline(std::istream& is, Student& stu)
{
    // getline(is, stu.name);
    getline(is, (std::string&) stu);
    return is;
}

std::ostream& 
operator<<(std::ostream& os, const Student& stu)
{
    // os << "Scores for " << stu.name << ":\n";
    os << "Scores for " << (const std::string&) stu << ":\n";
    stu.arr_out(os);
    return os;
}
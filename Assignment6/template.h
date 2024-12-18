/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment6
*/

#ifndef TEMP_h
#define TEMP_h
#include <vector>
#include <iostream>

template <class Type>
class Template
{
public:
    Template(Type sample, int n, const std::vector<float>& v) : sample(sample), n(n), v(v) {}
    bool foo()
    {
        return sample.bar(n, v);
    }

private:
    Type sample;
    int n;
    std::vector<float> v;
};

template <>
class Template<int>
{
public:
    Template(int sample, int n, const std::vector<float>& v): sample(sample), n(n), v(v) {}
    bool foo()
    {
        return true;
    }

private:
    int sample;
    int n;
    std::vector<float> v;
};

template <>
class Template<float>
{
public:
    Template(float sample, int n, const std::vector<float>& v) : sample(sample), n(n), v(v) {}
    bool foo()
    {
        return false;
    }
private:
    float sample;
    int n;
    std::vector<float> v;
};

class Class1
{
public:
    bool bar(int n, std::vector<float>& v)
    {
        return n > 0;
    }
    void c_1_1()
    {
        std::cout << "1.1\n";
    }
    void c_1_2()
    {
        std::cout << "1.2\n";;
    }
    void c_1_3()
    {
        std::cout << "1.3\n";
    }
};

class Class2
{
public:
    bool bar(int n, std::vector<float>& v)
    {
        return !v.empty();
    }
    void c_2_1()
    {
        std::cout << "2.1\n";
    }
    void c_2_2()
    {
        std::cout << "2.2\n";
    }
    void c_2_3()
    {
        std::cout << "2.3\n";
    }
};

class Class3
{
public:
    bool bar(int n, std::vector<float>& v)
    {
        return n == (int)-v.size();
    }

    void c_3_1()
    {
        std::cout << "3.1\n";
    }
    void c_3_2()
    {
        std::cout << "3.2\n";
    }
    void c_3_3()
    {
        std::cout << "3.3\n";
    }
};

#endif

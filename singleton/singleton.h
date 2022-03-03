#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <string>
class Yiyi
{
public:
    static Yiyi *GetYiyi()
    {
        if (yiyi)
            return yiyi;
        else
        {
            yiyi = new Yiyi("Yiyi");
            return yiyi;
        }
    }
    bool Kiss(std::string key)
    {
        if (key == "Shushu")
        {
            std::cout << "MUA!!" << std::endl;
            return true;
        }
        else
            return false;
    }
    ~Yiyi()
    {
        if (!yiyi)
            delete yiyi;
    }
    std::string GetName()
    {
        return name;
    }

private:
    Yiyi(std::string name) : name(name) {}
    static Yiyi *yiyi;
    std::string name;
};
class Shushu
{
public:
    static Shushu *GetShushu()
    {
        if (shushu)
            return shushu;
        else
        {
            shushu = new Shushu("Shushu");
            return shushu;
        }
    }
    bool Kiss(std::string key)
    {
        if (key == "Yiyi")
        {
            std::cout << "MUA!!" << std::endl;
            return true;
        }
        else
            return false;
    }
    ~Shushu()
    {
        if (!shushu)
            delete shushu;
    }
    std::string GetName()
    {
        return name;
    }

private:
    Shushu(std::string name) : name(name) {}
    static Shushu *shushu;
    std::string name;
};
#endif
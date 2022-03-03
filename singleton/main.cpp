#include "singleton.h"
int main()
{
    Shushu::GetShushu()->Kiss(Yiyi::GetYiyi()->GetName());
    Shushu *s = Shushu::GetShushu();
    delete s;
}
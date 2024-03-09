#include "dynarr.h"
#include<iostream>
using namespace std;
template<class anything>
dynarr<anything>::dynarr(int s)
{
    data=new anything[s];
    size=s;
}
template<class anything>
dynarr<anything>::~dynarr()
{
    delete[]data;

}
template<class anything>
anything dynarr<anything>::getvalue(int index)
{
    return data[index];
}
template<class anything>
void dynarr<anything>::setvalue(int index,anything value)
{
    data[index]=value;
}

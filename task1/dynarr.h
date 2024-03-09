#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template<class anything>

class dynarr
{
private:
    int *data;
    int size;

public :
    dynarr(int);
    ~dynarr();
    void setvalue(int,anything);
    anything getvalue(int);

};

#endif // DYNARR_H_INCLUDED

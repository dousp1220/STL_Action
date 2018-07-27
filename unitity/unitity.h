#ifndef UNITITY_H
#define UNITITY_H

//using namespace std;

namespace myStd {

template<class T1, class T2>
class pair
{
public:
    typedef T1 first_type;
    typedef T2 second_type;

    pair() : first(first_type()), second(second_type()) {}

    pair(const first_type t1, const second_type t2)
        : first(t1), second(t2)
    {}

    first_type first;
    second_type second;
};

template<class T1, class T2>
bool operator == (const pair<T1, T2>& X, const pair<T1, T2>& Y)
{
    return X.first == Y.first && X.second == Y.second;
}

template<class T1, class T2>
bool operator < (const pair<T1, T2>& X, const pair<T1, T2>& Y)
{
    return X.first < Y.first || !(X.first < Y.first) && X.second < Y.second;
}

template<class T1, class T2>
pair<T1, T2> make_pair(const T1 &t1, const T2 &t2)
{
    return pair<T1, T2>(t1, t2);
}

namespace rel_ops {

template<class T>
bool operator != (const T& X, const T& Y)
{
    return !(X == Y);
}

template<class T>
bool operator >= (const T& X, const T& Y)
{
    return !(X < Y);
}

template<class T>
bool operator <= (const T& X, const T& Y)
{
    return !(Y < X);
}

template<class T>
bool operator > (const T& X, const T& Y)
{
    return Y < X;
}

}
}
#endif // UNITITY_H

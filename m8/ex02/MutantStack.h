//
// Created by Abdelouahad Ait hamd on 4/1/22.
//

#ifndef CPP_MUTANTSTACK_H
#define CPP_MUTANTSTACK_H
#include <stack>
template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>() {}
    ~MutantStack() {}
    MutantStack(MutantStack const &other) : std::stack<T>(other) {}
    MutantStack &operator=(MutantStack const &other) {
        std::stack<T>::operator=(other);
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator  begin() {
        return this->c.begin();
    }
    iterator end() {
        return this->c.end();
    }
};
#endif //CPP_MUTANTSTACK_H

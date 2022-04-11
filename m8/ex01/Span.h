//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#ifndef CPP_SPAN_H
#define CPP_SPAN_H
#include <iostream>
#include <vector>

class Span {
private:
    unsigned int _size;
    std::vector<int> _data;
public:
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();
    Span &operator=(Span const &rhs);
    void addNumber(int n) throw(Span::SpanFullException);
    void addNumber(std::vector<int>::iterator start,
                   std::vector<int>::iterator end) throw(Span::SpanFullException);
    int shortestSpan() throw(Span::NoSpanException);
    int longestSpan() throw(Span::NoSpanException);
    class SpanFullException : public std::exception {
    public:
        SpanFullException();

        virtual const char *what() const throw();
    };
    class NoSpanException : public std::exception {
    public:
        NoSpanException();
        virtual const char *what() const throw();
    };

};


#endif //CPP_SPAN_H

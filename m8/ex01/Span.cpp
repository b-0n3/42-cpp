//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#include "Span.h"

Span::Span(unsigned int n) {
    this->_size = n;
}

Span::Span(const Span &src) {
   *this = src;
}

Span::~Span() {

}

Span &Span::operator=(const Span &src) {
   if (this != &src) {
       this->_size = src._size;
       this->_data = src._data;
   }
    return *this;
}

void Span::addNumber(int n) throw(Span::SpanFullException) {
    if (this->_data.size() < this->_size) {
        this->_data.push_back(n);
    }
    else
        throw Span::SpanFullException();
}

int Span::shortestSpan() throw(Span::NoSpanException) {
    if (this->_size < 2)
        throw Span::NoSpanException();
      std::sort(this->_data.begin(), this->_data.end());
      int min = this->_data[1] - this->_data[0];
      int path = min;
      for (int i = 1; i < (int)this->_data.size() - 1; i++) {
          path = this->_data[i + 1] - this->_data[i];
          if (path < min)
              min = path;
      }
    return min;
}

int Span::longestSpan() throw(Span::NoSpanException) {
    if (this->_size < 2)
        throw Span::NoSpanException();
     std::sort(this->_data.begin(), this->_data.end());
    return (this->_data[(int)this->_data.size() -1 ] - this->_data[0]);
}

void Span::addNumber(std::vector<int>::iterator start,
                     std::vector<int>::iterator end) throw(Span::SpanFullException) {
  if (this->_size < this->_data.size())
      throw Span::SpanFullException();
    for (; start != end; start++) {
        if (this->_size > this->_data.size())
            this->_data.push_back(*start);
        else
            throw Span::SpanFullException();
    }
}

const char *Span::SpanFullException::what() const throw() {
    return "Span is full";
}

Span::SpanFullException::SpanFullException() {

}

Span::NoSpanException::NoSpanException() {

}

const char *Span::NoSpanException::what() const throw() {
    return "No span available";
}

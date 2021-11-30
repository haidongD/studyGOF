#ifndef DIRECTOR_H
#define DIRECTOR_H

class Builder;

class Director {
 public:
  Director(Builder* bld);
  ~Director();
  void Construct();

 private:
  Builder* _bld;
};

#endif  // DIRECTOR_H

#ifndef CONTEXT_H
#define CONTEXT_H

class State;

class Context {
public:
  Context();
  Context(State *state);
  ~Context();
  void OprationInterface();
  void OperationChangState();

protected:
private:
  friend class State; //表明在State类中可以访问Context类的private字段
  bool ChangeState(State *state);

private:
  State *_state;
};

#endif // CONTEXT_H

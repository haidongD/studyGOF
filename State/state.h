#ifndef STATE_H
#define STATE_H

class Context;
class State {
public:
  State();
  virtual ~State();
  virtual void OperationInterface(Context *) = 0;
  virtual void OperationChangeState(Context *) = 0;

protected:
  bool ChangeState(Context *con, State *st);
};

#endif // STATE_H

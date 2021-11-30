#include "composite.h"

Composite::Composite() {}

void Composite::Operation() {
  for (auto var : comVec) {
    var->Operation();
  }
}

Component::ComponentType Composite::type() { return Component::Composite; }

void Composite::Add(Component *com) { comVec.push_back(com); }

void Composite::Remove(Component *com) {
  auto it = find(comVec.begin(), comVec.end(), com);
  comVec.erase(it);
}

Component *Composite::GetChild(int index) { return comVec.at(index); }

#include "leaf.h"
#include <QDebug>

Leaf::Leaf() {}

void Leaf::Operation() { qDebug() << __FUNCTION__; }

Component::ComponentType Leaf::type() { return Component::Leaf; }

#ifndef ALGUCS
#define ALGUCS

#include "AlgGeneric.h"
#include <utility>
#include <functional>
#include "Problem.h"

using namespace std;

class AlgUCS : public AlgGeneric {
public:
    queue<Node*>* queuingFunction(queue<Node*>*, queue<Node*>*) override;
    AlgUCS();
};

#endif
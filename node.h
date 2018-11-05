#include <vector>
#include <math.h>
#include <iostream>

#ifndef NODE_H
#define NODE_H
class node{
private:
  std::vector<int> inputs, targets;
  std::vector<std::vector<int>> weights, hidden_weights;
public:
  node();
  ~node();
  void set_inputs(std::vector<int>);
  void set_targets(std::vector<int>);
  void set_weights(std::vector<std::vector<int>>);
  void set_hidden_weights(std::vector<std::vector<int>>);
  void to_string();
};
#endif

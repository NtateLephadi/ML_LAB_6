#include <vector>
#include <math.h>
#include <iostream>

#ifndef NODE_H
#define NODE_H
class node{
private:
  std::vector<int> inputs, targets;
  std::vector<std::vector<int>> weights, hidden_weights;
  std::vector<double>
    weighted_sum,
    hidden_weighted_sum,
    hidden_outputs,
    outputs,
    errors,
    changes;
  double learning_rate;
  std::vector<std::vector<double>> changed_hidden_weights;

public:
  node();
  ~node();
  void set_learning_rate(double);
  void set_inputs(std::vector<int>);
  void set_targets(std::vector<int>);
  void set_weights(std::vector<std::vector<int>>);
  void set_hidden_weights(std::vector<std::vector<int>>);
  void to_string();
  void product_sum(int);
  std::vector<int> get_inputs();
  std::vector<int> get_targets();
  double sigmoid(double);
  void hidden_output();
  void hidden_product_sum(int);
  void output_output();
  void find_error(int);
  void output_error();
  void find_weight_change(int);
  void weight_change();
};
#endif

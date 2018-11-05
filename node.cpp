#include "node.h"

node::node(){}

node::~node(){}

void node::set_targets(std::vector<int> v){
  this->targets = v;
}

void node::set_inputs(std::vector<int> v){
  this->inputs = v;
}

void node::set_weights(std::vector<std::vector<int>> v){
  this->weights = v;
}

void node::set_hidden_weights(std::vector<std::vector<int>> v){
  this->hidden_weights =v;
}

void node::to_string(){
  std::cout << "targets" << '\n';
  for (size_t i = 0; i < this->targets.size(); i++) {
    /* code */
    std::cout << this->targets[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "inputs" << '\n';
  for (size_t i = 0; i < this->inputs.size(); i++) {
    /* code */
    std::cout << this->inputs[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "weights" << '\n';
  for (size_t i = 0; i < this->weights.size(); i++) {
    /* code */
    for (size_t j = 0; j < this->weights[i].size(); j++) {
      /* code */
      std::cout << this->weights[i][j] << ' ';
    }
    std::cout << '\n';
  }

  std::cout << "hidden_weights" << '\n';
  for (size_t i = 0; i < this->hidden_weights.size(); i++) {
    /* code */
    for (size_t j = 0; j < this->hidden_weights[i].size(); j++) {
      /* code */
      std::cout << this->hidden_weights[i][j] << ' ';
    }
    std::cout << '\n';
  }
}

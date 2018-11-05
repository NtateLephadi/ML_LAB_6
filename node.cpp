#include "node.h"

node::node(){}

node::~node(){}

void node::set_targets(std::vector<int> v){
  this->targets = v;
}

void node::set_learning_rate(double d){
  this->learning_rate = d;
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

std::vector<int> node::get_targets(){
  return this->targets;
}

std::vector<int> node::get_inputs(){
  return this->inputs;
}

void node::product_sum(int index){
  double product_sum = 0;
  for (size_t j = 0; j < 2; j++) {
    /* code */
    product_sum += this->weights[index][j] * this->inputs[j];
  }
  this->weighted_sum.push_back(product_sum);
}

double node::sigmoid(double d){
  return 1/(1+exp(-d));
}

void node::hidden_output() {
  /* code */
  for (size_t i = 0; i < 2; i++) {
    /* code */
    this->product_sum(i);
    this->hidden_outputs.push_back(this->sigmoid(this->weighted_sum[i]));
  }
}

void node::hidden_product_sum(int index){
  double product_sum = 0;
  for (size_t j = 0; j < 2; j++) {
    /* code */
    product_sum += this->hidden_weights[index][j] * this->hidden_outputs[j];
  }
  this->hidden_weighted_sum.push_back(product_sum);
}

void node::output_output() {
  /* code */
  for (size_t i = 0; i < 2; i++) {
    /* code */
    this->hidden_product_sum(i);
    this->outputs.push_back(this->sigmoid(this->hidden_weighted_sum[i]));
  }
}

void node::find_error(int index){
  double error;
  error = this->outputs[index]*(
    1-this->outputs[index])*(
    this->targets[index]-this->outputs[index]
  );
  this->errors.push_back(error);
}

void node::output_error(){
  for (int i = 0; i < 2; i++) {
    /* code */
    this->find_error(i);
  }
}

void node::find_weight_change(int index){
  double change;
  change = this->learning_rate*this->errors[index]*this->outputs[index];
  this->changes.push_back(change);
}

void node::weight_change(){
  for (size_t i = 0; i < 4; i++) {
    /* code */
    for (size_t j = 0; j < 2; j++) {
      /* code */
    }
  }
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

  std::cout << "weighted_sum" << '\n';
  for (size_t i = 0; i < this->weighted_sum.size(); i++) {
    /* code */
    std::cout << this->weighted_sum[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "hidden_outputs" << '\n';
  for (size_t i = 0; i < this->hidden_outputs.size(); i++) {
    /* code */
    std::cout << this->hidden_outputs[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "outputs" << '\n';
  for (size_t i = 0; i < this->outputs.size(); i++) {
    /* code */
    std::cout << this->outputs[i] << ' ';
  }

  std::cout << '\n';
  std::cout << "output error" << '\n';
  for (size_t i = 0; i < this->errors.size(); i++) {
    /* code */
    std::cout << this->errors[i] << ' ';
  }
  std::cout << '\n';
}

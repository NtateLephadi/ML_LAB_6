#include "node.h"

int main(int argc, char const *argv[]) {
  /* code */
  node n;
  n.set_targets({1, 0});
  n.set_inputs({0, 1});
  n.set_weights(
    {
      {-1, 0},
      {0, 1}
    }
  );

  n.set_hidden_weights(
    {
      {1, 0},
      {-1, 1}
    }
  );

  n.hidden_output();
  n.output_output();
  n.output_error();
  n.to_string();
  return 0;
}

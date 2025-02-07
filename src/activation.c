#include "../include/activation.h"

double sigmoid_activation(double x) {
  return 1.0 / (1.0 + exp(-x));
}

double sigmoid_derivative(double x) {
  double sig = sigmoid(x);
  return sig * (1 - sig); // apparently more efficient than my derivative done by hand?????? skill issue
  // return exp(-x) / ((1.0 + exp(-x)) * (1.0 + exp(-x)));
}

double relu_activation(double x) {
  return x > 0 ? x : 0; // x if x > 0, else 0
}

double relu_derivative(double x) {
  return x > 0 ? 1 : 0;
}

double tanh_activation(double x); {
  return tanh(x);
}

double tanh_derivative(double x) {
  double t = tanh(x);
  return 1 - t * t; // sech^2 = 1 - tanh^2
}

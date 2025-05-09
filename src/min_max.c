#include "min_max.h"

double double_max_element(const double* const arr, const unsigned int len) {
  double res = arr[0];
  for (unsigned int i = 1; i < len; ++i) {
    if (arr[i] > res) {
      res = arr[i];
    }
  }
  return res;
}

double double_min_element(const double* const arr, const unsigned int len) {
  double res = arr[0];
  for (unsigned int i = 1; i < len; ++i) {
    if (arr[i] < res) {
      res = arr[i];
    }
  }
  return res;
}

double double_min(const double a, const double b) {
  return (a < b) ? a : b;
}

double double_max(const double a, const double b) {
  return (a > b) ? a : b;
}

int int_max_element(const int* const arr, const unsigned int len) {
  int res = arr[0];
  for (unsigned int i = 1; i < len; ++i) {
    if (arr[i] > res) {
      res = arr[i];
    }
  }
  return res;
}

int int_min_element(const int* const arr, const unsigned int len) {
  int res = arr[0];
  for (unsigned int i = 1; i < len; ++i) {
    if (arr[i] < res) {
      res = arr[i];
    }
  }
  return res;

}

int int_min(const int a, const int b) {
  return (a < b) ? a : b;
}

int int_max(const int a, const int b) {
  return (a > b) ? a : b;
}


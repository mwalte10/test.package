#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int adder (int a, int b) {
  return(a+b);
}

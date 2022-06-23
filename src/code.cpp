#include <Rcpp.h>
#include <string>
using namespace Rcpp;

// [[Rcpp::export]]
int adder (int a, int b) {
  return(a+b);
}

// [[Rcpp::export]]
bool is_maggie_bday (int bday) {
  if (bday == 9251996) {
    return(true);
  } else {
    return(false);
  }
}

// [[Rcpp::export]]
bool is_maggies_name (std::string input){
  std::string str = "Maggie";
  if (input == str) {
    return(true);
  } else {
    return(false);
  }
}

// [[Rcpp::export]]
int to_ten (int num){
  while (num < 10){
   num = num + 1;
  }
    return(num);
}

// [[Rcpp::export]]
int print_yes (int start, int end){
  int out = 0;
  for(start; start < end; start++){
    out = start + out;
  }
  return(out);
}




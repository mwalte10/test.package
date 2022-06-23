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
  if(input == str){
    return(true);
  }else{
    return(false);
  }
}

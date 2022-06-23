##' Add two numbers
##'
##' @param a The first number
##' @param b The second number
##'
##' @return Sum of the two numbers
##' @export
##'
##' @examples
##' a = 1; b = 2; test_function(1,2)
test_function <- function(a, b) {
  a + b
}

test_function2 <- function(a, b) {
  adder(a, b)
}

test_is_maggie_bday <- function(date){
  is_maggie_bday(date)
}

test_is_maggie <- function(name){
  is_maggie(name)
}

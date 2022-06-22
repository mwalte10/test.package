test_that("addition works", {
  expect_equal(test_function(2, 2), 4)
  expect_error(test_function(1, b))
})

test_that("rcpp adder works", {
  expect_equal(test_function2(1, 3), 4)
})

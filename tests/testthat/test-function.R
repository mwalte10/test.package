test_that("addition works", {
  expect_equal(test_function(2, 2), 4)
  expect_error(test_function(1, b))
})

test_that("rcpp adder works", {
  expect_equal(test_function2(1, 3), 4)
})

test_that("is_maggie_bday works", {
  expect_equal(is_maggie_bday(9251996), TRUE)
  expect_equal(is_maggie_bday(10251996), FALSE)
})

test_that("is_maggie works", {
  expect_equal(is_maggies_name("Maggie"), TRUE)
  expect_equal(is_maggies_name("Rob"), FALSE)
})

test_that("to ten works", {
  expect_equal(to_ten(1), 10)
})

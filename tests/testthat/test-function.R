test_that("addition works", {
  expect_equal(test_function(2, 2), 4)
  expect_error(test_function(1, b))
})

test_that("rcpp adder works", {
  expect_equal(test_function2(1, 3), 4)
})

test_that("is_maggie_bday works", {
  expect_equal(is_maggie_bday(9251996), true)
  expect_equal(is_maggie(10251996), false)
})

test_that("is_maggie works", {
  expect_equal(is_maggies_name("Maggie"), true)
  expect_equal(is_maggies_name("Rob"), false)
})

test_that("to ten works", {
  expect_equal(to_ten(1), 10)
})

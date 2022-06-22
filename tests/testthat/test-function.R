test_that("addition works", {
  expect_equal(test_function(2,2), 4)
  expect_error(test_function(1,b))
})

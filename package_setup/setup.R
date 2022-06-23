setwd("C:/Users/mwalters/Documents/r_packages/")
# install.packages("usethis")
# install.packages("Rtools")
#always qualify packages
usethis::create_package("test.package")
#changes the license, then can change the copyright owner to Imperial
usethis::use_mit_license()
#ctl shift l gives devtools::load_all
usethis::use_github_actions()

usethis::use_rcpp()
#takes the roxygen documentation and builds the namespace from it and builds
#the function export. makes your package know where to look for the
#cpp function, changed a thing in a comment (roxygen strings)
##if you do document you then need to change the load all
devtools::document()
##when you make a change to some code or after you do a change to the document
devtools::load_all()
test_is_maggie_bday(11251996)
test_is_maggie_bday(9251996)


#add this to the PACKAGENAME-package.R
#' @useDynLib test.package, .registration = TRUE

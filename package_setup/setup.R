setwd("C:/Users/mwalters/Documents/r_packages/")
# install.packages("usethis")
# install.packages("Rtools")
#always qualify packages
usethis::create_package("test.package")
#changes the license, then can change the copyright owner to Imperial
usethis::use_mit_license()
#ctl shift l gives devtools::load_all
usethis::use_github_actions()

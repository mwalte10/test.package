// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// adder
int adder(int a, int b);
RcppExport SEXP _test_package_adder(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(adder(a, b));
    return rcpp_result_gen;
END_RCPP
}
// is_maggie_bday
bool is_maggie_bday(int bday);
RcppExport SEXP _test_package_is_maggie_bday(SEXP bdaySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type bday(bdaySEXP);
    rcpp_result_gen = Rcpp::wrap(is_maggie_bday(bday));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_test_package_adder", (DL_FUNC) &_test_package_adder, 2},
    {"_test_package_is_maggie_bday", (DL_FUNC) &_test_package_is_maggie_bday, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_test_package(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

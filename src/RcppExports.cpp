// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cb
NumericVector cb(NumericVector m1, NumericVector m2, NumericVector m3, IntegerVector d);
RcppExport SEXP trackdem_cb(SEXP m1SEXP, SEXP m2SEXP, SEXP m3SEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m2(m2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m3(m3SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(cb(m1, m2, m3, d));
    return rcpp_result_gen;
END_RCPP
}
// getCoords
NumericVector getCoords(NumericVector m, IntegerVector d);
RcppExport SEXP trackdem_getCoords(SEXP mSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(getCoords(m, d));
    return rcpp_result_gen;
END_RCPP
}
// sb
NumericVector sb(NumericVector m1, NumericVector bg, IntegerVector d);
RcppExport SEXP trackdem_sb(SEXP m1SEXP, SEXP bgSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(sb(m1, bg, d));
    return rcpp_result_gen;
END_RCPP
}

/* -*- compile-command: "R CMD INSTALL .." -*- */
// Modified to compute changes in mean and variance

#define ERROR_TOO_MANY_SEGMENTS 2

int binseg_normal
(const double *data_vec, const int n_data, const int max_segments,
 int *seg_end, double *cost,
 double *before_mean, double *after_mean,
 double *before_var, double *after_var, // Modified the signature to include variance
 int *, int *,
 int *invalidates_index, int *invalidates_before);


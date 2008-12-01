/***********************************************************************
 * GLOBAL SYMBOLS 
 *********************************************************************/
/* common flags */
extern int nbs_sequential_flag;
extern int nbs_check_flag;
extern int nbs_result;
extern int nbs_output_format;
extern int nbs_print_header;
/* common variables */
extern char nbs_name[];
extern char nbs_parameters[];
extern char nbs_model[];
extern char nbs_resources[];
/* compile and execution information */
extern char nbs_exec_date[];
extern char nbs_exec_message[];
extern char nbs_comp_date[];
extern char nbs_comp_message[];
extern char nbs_cc[];
extern char nbs_cflags[];
extern char nbs_ld[];
extern char nbs_ldflags[];
/* time variables */
extern double nbs_time_program;
extern double nbs_time_sequential;

extern char nbs_cutoff[];
extern int  nbs_cutoff_value;
extern int  nbs_verbose_mode;

extern int nbs_arg_size_1;
extern int nbs_arg_size_2;

#define NBS_RESULT_NA 0
#define NBS_RESULT_SUCCESSFUL 1
#define NBS_RESULT_UNSUCCESSFUL 2

typedef void* object_id;

typedef struct {
  void *data;
  unsigned int *length;
} sized_array;


// basic interface functions
bool decref(object_id object);
bool owned(object_id, bool *is_owned);


// high-level solver interfaces
bool solver_init(object_id problem, object_id options, object_id solution_options, object_id *solver);
bool solution_init(object_id options); // solution_init or solution_option in solver_init??
bool solver_run(object_id solver, object_id parameters, object_id *solution);

bool solution_eval(object_id solution, sized_array at, sized_array *evaluations); // caller owns return
bool solution_output(object_id solution, sized_array at, sized_array *evaluations); // caller owns return
bool solution_visualize(object_id solution);
bool solution_get_vector(object_id solution); // ??


// solver data structure interface
bool solver_get_operator(object_id solver, object_id *op);
bool solver_get_rhs(object_id solver, object_id *rhs);

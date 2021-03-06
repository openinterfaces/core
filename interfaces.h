typedef void* object_id;

typedef struct {
  void *data;
  unsigned int *length;
} sized_array;


// basic interface functions
bool release(object_id object);
bool owned(object_id, bool *is_owned);


// high-level solver interfaces
bool solver_init(object_id problem, const char *options, object_id *solver);
bool solver_run(object_id solver, object_id parameters, object_id *solution);

bool solution_eval(object_id solution, sized_array at, sized_array *evaluations); // caller owns return
bool solution_output(object_id solution, sized_array at, sized_array *evaluations); // caller owns return
bool solution_visualize(object_id solution);
bool solution_get_vector(object_id solution); // ??


// solver data structure interface
bool solver_get_operator(object_id solver, object_id *op);
bool solver_get_rhs(object_id solver, object_id *rhs);

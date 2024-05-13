#include <erl_nif.h>

static ERL_NIF_TERM export_add(ErlNifEnv *env, int argc,
                               const ERL_NIF_TERM argv[]) {
  (void)argc;
  int a, b;
  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);
  return enif_make_int(env, a + b);
}

static ErlNifFunc nif_funcs[] = {{"add", 2, export_add, 0}};

ERL_NIF_INIT(Elixir.BundlexSimpleNif.Example.Nif, nif_funcs, NULL, NULL, NULL,
             NULL)

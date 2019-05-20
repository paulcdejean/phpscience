#include <stdio.h>

struct zend_module_entry {
  unsigned short size;
  unsigned int zend_api;
  unsigned char zend_debug;
  unsigned char zts;
  const struct _zend_ini_entry *ini_entry;
  const struct _zend_module_dep *deps;
  const char *name;
  const struct _zend_function_entry *functions;
  int (*module_startup_func)(int type, int module_number);
  int (*module_shutdown_func)(int type, int module_number);
  int (*request_startup_func)(int type, int module_number);
  int (*request_shutdown_func)(int type, int module_number);
  void (*info_func)(struct zend_module_entry *zend_module);
  const char *version;
  size_t globals_size;
  void* globals_ptr;
  void (*globals_ctor)(void *global);
  void (*globals_dtor)(void *global);
  int (*post_deactivate_func)(void);
  int module_started;
  unsigned char type;
  void *handle;
  int module_number;
  const char *build_id;
};

struct zend_module_entry hello_module_entry = {
  .size = sizeof(struct zend_module_entry),
  .zend_api = 20151012,
  .zend_debug = 0,
  .zts = 0,
  .ini_entry = NULL,
  .deps = NULL,
  .name = "paultest",
  .functions = NULL,
  .module_startup_func = NULL,
  .module_shutdown_func = NULL,
  .request_startup_func = NULL,
  .request_shutdown_func = NULL,
  .info_func = NULL,
  .version = "0.0.1",
  .globals_size = 0,
  .globals_ptr = NULL,
  .globals_ctor = NULL,
  .globals_dtor = NULL,
  .post_deactivate_func = NULL,
  .module_started = 0,
  .type = 1,
  .handle = NULL,
  .module_number = 0,
  .build_id = "API20151012,NTS"
};

struct zend_module_entry* get_module() {
  return &hello_module_entry;
}

void hello()
{
  printf("Hello world!\n");
}

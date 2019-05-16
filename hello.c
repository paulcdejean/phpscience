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
  .zts = 0
};

int get_module()
{
  return 0;
}

void hello()
{
  printf("Hello world!\n");
}

#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - prints python list
 * @p: A Project list.
 */

void print_python_list_info(PyObject *p)
{
	long int size = pyList_Size(p);
	int i;
	PyListobject *obj = (pyListobject *)p;

	print("[*] Size of the Python List = %li\n", size);
	print("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; < size; i++)
		print("Element %i: %s\n", i, py_TYPEi(obj->ob_item[i]->tp_name);

}

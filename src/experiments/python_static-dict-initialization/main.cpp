
#include <iostream>

#include <boost/python.hpp>
using namespace boost::python;

//
// In memory_wrap.cpp, two boost::python::dict object used to be defined
// as static. However, this causes access violations.
// You must instantiate this after Py_Initialize gets called.
//
// See python3/Objects/dictobject.c for more detail.
//
//dict g_oExposedClasses;
//dict g_oClassInfo;

int main()
{
    // You CANNOT instantiate dict here.
    //dict d;

    Py_Initialize();
    // Initialize python before instancing a dict object.
    dict d;
    Py_Finalize();

    std::cout << "Exp: Python Static dict initialization" << std::endl;
}


#include <iostream>
#include <string>

#include <boost/python.hpp>
using namespace boost::python;

#define __W(str) L##str
#define _W(str) __W(str)

int main()
{
    auto serverDir = std::wstring(_W(CSS_SERVER_DIR));
    auto pythonRoot = serverDir + L"\\cstrike\\addons\\source-python\\Python3";

//#define USE_OLD_PATH
#ifdef USE_OLD_PATH
    // Old path
    auto pythonHome = pythonRoot;
    auto pythonPath = pythonRoot;
#else
    auto pythonHome = pythonRoot;
    auto pythonPath = pythonRoot + L"\\Lib;" + pythonRoot + L"\\DLLs";
#endif
    auto pythonRuntime = pythonRoot + L"\\python311.dll";

    Py_SetPythonHome(pythonHome.c_str());
    Py_SetProgramName(pythonRuntime.c_str());
    Py_SetPath(pythonPath.c_str());

    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("print(sys.path)");
    PyRun_SimpleString("print('Built-ins modules:', sys.builtin_module_names)");

    import("io");

    // Importing old traceback located in "addons/source-python/Python3" (3.6) causes an error.
    // Use the new version (3.11) instead.
    import("traceback");

    // Socket library cannot be used if you are linking to a static python lib.
    // If the proper python311.dll is loaded, socket library can be imported without any access violations.
    import("socket");

    Py_Finalize();

    std::cout << "Built-in modules are successfully loaded!" << std::endl;
}

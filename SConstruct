import distutils.sysconfig
import os
import numpy

cppad_include_path = os.getcwd() + '/include'

LIBS		= [	'boost_python-gcc42-1_34_1'
			  ]
LIBPATH		= [
				'/data/walter/opt_software/boost_1_34_1/bin.v2/libs/python/build/gcc-4.2.1/release'
			  ]
INCLUDEPATH	= [
			cppad_include_path,
			'/data/walter/opt_software/boost_1_34_1',
			'/usr/include/python2.5'
			]

env = Environment(
	CPPPATH=[distutils.sysconfig.get_python_inc(),numpy.get_include()] + INCLUDEPATH,
	CXXFLAGS="-ftemplate-depth-100 -DBOOST_PYTHON_DYNAMIC_LIB -O2",
	LIBPATH=["/usr/lib/python2.5/config"] + LIBPATH,
	LIBS= LIBS,
	RPATH = LIBPATH, #include information where shared libraries can be found to avoid errors like: "ImportError: libboost_python-gcc42-mt-1_34_1.so.1.34.1: cannot open shared object file: No such file or directory"
	SHLIBPREFIX="", #gets rid of lib prefix
)
Default('.')
cppad = env.SharedLibrary(target='_cppad', source=['py_cppad.cpp', 'num_util.cpp'])
env.Install("./release/cppad", cppad)


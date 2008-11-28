#ifndef PY_CPPAD_HPP
#define PY_CPPAD_HPP


#define PY_ARRAY_UNIQUE_SYMBOL PyArrayHandle
#include "num_util.h"

#include "cppad/cppad.hpp"


using namespace std;
namespace b = boost;
namespace bp = boost::python;
namespace bpn = boost::python::numeric;
namespace nu = num_util;


typedef CppAD::AD<double> AD_double;
typedef CppAD::vector<double> vector_double;
typedef CppAD::VecAD<double> VecAD_double;
typedef CppAD::vector<CppAD::AD<double> > vector_AD_double;
typedef CppAD::VecAD< CppAD::AD<double> > VecAD_ADdouble;



BOOST_PYTHON_MODULE(_cppad)
{
	using namespace boost::python;
	import_array(); 										/* some kind of hack to get numpy working */
	bpn::array::set_module_and_type("numpy", "ndarray");	/* some kind of hack to get numpy working */
	
	scope().attr("__doc__") =" CppAD: docstring \n\
							   next line";



	class_<AD_double>("AD_double");
	class_<VecAD_double>("VecAD_double");

	def("Independent",		CppAD::Independent<vector_AD_double>);

}

#endif

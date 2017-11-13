# include "vec2array.hpp"

# define PY_ARRAY_UNIQUE_SYMBOL PyArray_Pycppad

# define PYCPPAD_DEBUG_ISSUES

namespace pycppad {
array vec2array(double_vec& vec)
{	npy_intp n = static_cast<npy_intp>( vec.size() );
	PYCPPAD_ASSERT( n >= 0 , "");

	object obj(handle<>( PyArray_SimpleNew(1, &n, NPY_DOUBLE) ));
	double *ptr = static_cast<double*> ( PyArray_DATA (
		reinterpret_cast<PyArrayObject*> ( obj.ptr() )
	));
	for(size_t i = 0; i < vec.size(); i++){
		ptr[i] = vec[i];
	}
	return  static_cast<array>( obj );
}
array vec2array(AD_double_vec& vec)
{
	npy_intp n = static_cast<npy_intp>( vec.size() );
	PYCPPAD_ASSERT( n >= 0 , "");

	object obj(handle<>( PyArray_SimpleNew(1, &n, NPY_OBJECT) ));
	for(size_t i = 0; i < vec.size(); i++){
		obj[i] = vec[i];
	}
	return  static_cast<array>( obj );
}
array vec2array(AD_AD_double_vec& vec)
{	npy_intp n = static_cast<npy_intp>( vec.size() );
	PYCPPAD_ASSERT( n >= 0 , "");

	object obj(handle<>( PyArray_SimpleNew(1, &n, NPY_OBJECT) ));
	for(size_t i = 0; i < vec.size(); i++){
		obj[i] = vec[i];
	}
	return  static_cast<array>( obj );
}
// ========================================================================
void vec2array_import_array(void)
{	_import_array(); }
} // end namespace pycppad

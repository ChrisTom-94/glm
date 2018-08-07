/// @ref ext_vector_dvec1_precision
/// @file glm/ext/vector_dvec1_precision.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_dvec1_precision GLM_EXT_vector_dvec1_precision
/// @ingroup ext
///
/// Include <glm/ext/vector_dvec1_precision.hpp> to use the features of this extension.
///
/// Exposes highp_dvec1, mediump_dvec1 and lowp_dvec1 types.

#pragma once

#include "../detail/type_vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_dvec1_precision extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_dvec1_precision
	/// @{

	/// 1 component vector of double-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_vector_dvec1_precision
	typedef vec<1, double, highp>		highp_dvec1;

	/// 1 component vector of double-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @see ext_vector_dvec1_precision
	typedef vec<1, double, mediump>		mediump_dvec1;

	/// 1 component vector of double-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @see ext_vector_dvec1_precision
	typedef vec<1, double, lowp>		lowp_dvec1;

	/// @}
}//namespace glm
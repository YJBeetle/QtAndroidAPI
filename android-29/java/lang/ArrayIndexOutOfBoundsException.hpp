#pragma once

#include "../../JString.hpp"
#include "./ArrayIndexOutOfBoundsException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"()V"
		) {}
	inline ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jint arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	inline ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


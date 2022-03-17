#pragma once

#include "../../JString.hpp"
#include "./StringIndexOutOfBoundsException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline StringIndexOutOfBoundsException::StringIndexOutOfBoundsException()
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"()V"
		) {}
	inline StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(jint arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	inline StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


#pragma once

#include "../../JString.hpp"
#include "./IndexOutOfBoundsException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IndexOutOfBoundsException::IndexOutOfBoundsException()
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"()V"
		) {}
	inline IndexOutOfBoundsException::IndexOutOfBoundsException(jint arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	inline IndexOutOfBoundsException::IndexOutOfBoundsException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IndexOutOfBoundsException::IndexOutOfBoundsException(jlong arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif

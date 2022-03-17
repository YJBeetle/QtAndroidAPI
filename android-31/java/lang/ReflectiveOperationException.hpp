#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ReflectiveOperationException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ReflectiveOperationException::ReflectiveOperationException()
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"()V"
		) {}
	inline ReflectiveOperationException::ReflectiveOperationException(JString arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ReflectiveOperationException::ReflectiveOperationException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline ReflectiveOperationException::ReflectiveOperationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"


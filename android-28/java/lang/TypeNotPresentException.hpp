#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./TypeNotPresentException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline TypeNotPresentException::TypeNotPresentException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.TypeNotPresentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	inline JString TypeNotPresentException::typeName() const
	{
		return callObjectMethod(
			"typeName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


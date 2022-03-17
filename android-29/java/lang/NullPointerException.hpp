#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NullPointerException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NullPointerException::NullPointerException()
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"()V"
		) {}
	inline NullPointerException::NullPointerException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JThrowable NullPointerException::fillInStackTrace() const
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JString NullPointerException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


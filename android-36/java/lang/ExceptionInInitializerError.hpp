#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ExceptionInInitializerError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ExceptionInInitializerError::ExceptionInInitializerError()
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"()V"
		) {}
	inline ExceptionInInitializerError::ExceptionInInitializerError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ExceptionInInitializerError::ExceptionInInitializerError(JThrowable arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
	inline JThrowable ExceptionInInitializerError::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif

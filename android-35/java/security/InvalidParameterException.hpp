#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidParameterException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline InvalidParameterException::InvalidParameterException()
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"()V"
		) {}
	inline InvalidParameterException::InvalidParameterException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidParameterException::InvalidParameterException(JThrowable arg0)
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvalidParameterException::InvalidParameterException(JString arg0, JThrowable arg1)
		: java::lang::IllegalArgumentException(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif

#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./LambdaConversionException.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline LambdaConversionException::LambdaConversionException()
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"()V"
		) {}
	inline LambdaConversionException::LambdaConversionException(JString arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline LambdaConversionException::LambdaConversionException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline LambdaConversionException::LambdaConversionException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline LambdaConversionException::LambdaConversionException(JString arg0, JThrowable arg1, jboolean arg2, jboolean arg3)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::lang::invoke

// Base class headers
#include "../Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif

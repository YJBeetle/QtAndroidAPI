#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AssertionError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline AssertionError::AssertionError()
		: java::lang::Error(
			"java.lang.AssertionError",
			"()V"
		) {}
	inline AssertionError::AssertionError(jboolean arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Z)V",
			arg0
		) {}
	inline AssertionError::AssertionError(jchar arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(C)V",
			arg0
		) {}
	inline AssertionError::AssertionError(jdouble arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(D)V",
			arg0
		) {}
	inline AssertionError::AssertionError(jfloat arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(F)V",
			arg0
		) {}
	inline AssertionError::AssertionError(jint arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(I)V",
			arg0
		) {}
	inline AssertionError::AssertionError(JObject arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	inline AssertionError::AssertionError(jlong arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(J)V",
			arg0
		) {}
	inline AssertionError::AssertionError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif

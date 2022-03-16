#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AndroidException.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline AndroidException::AndroidException()
		: java::lang::Exception(
			"android.util.AndroidException",
			"()V"
		) {}
	inline AndroidException::AndroidException(java::lang::Exception arg0)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline AndroidException::AndroidException(JString arg0)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AndroidException::AndroidException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::util

// Base class headers
#include "../../java/lang/Exception.hpp"


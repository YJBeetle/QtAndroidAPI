#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AndroidRuntimeException.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline AndroidRuntimeException::AndroidRuntimeException()
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"()V"
		) {}
	inline AndroidRuntimeException::AndroidRuntimeException(java::lang::Exception arg0)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline AndroidRuntimeException::AndroidRuntimeException(JString arg0)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AndroidRuntimeException::AndroidRuntimeException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::util

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif

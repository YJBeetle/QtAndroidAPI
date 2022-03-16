#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InflateException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline InflateException::InflateException()
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"()V"
		) {}
	inline InflateException::InflateException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InflateException::InflateException(JThrowable arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InflateException::InflateException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::view

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


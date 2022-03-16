#pragma once

#include "../../../JArray.hpp"
#include "../../../JThrowable.hpp"
#include "./Violation.def.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JThrowable Violation::fillInStackTrace() const
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	inline jint Violation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JThrowable Violation::initCause(JThrowable arg0) const
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
	}
	inline void Violation::setStackTrace(JArray arg0) const
	{
		callMethod<void>(
			"setStackTrace",
			"([Ljava/lang/StackTraceElement;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::os::strictmode

// Base class headers


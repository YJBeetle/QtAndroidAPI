#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./OperationApplicationException.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline OperationApplicationException::OperationApplicationException()
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"()V"
		) {}
	inline OperationApplicationException::OperationApplicationException(jint arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(I)V",
			arg0
		) {}
	inline OperationApplicationException::OperationApplicationException(JString arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline OperationApplicationException::OperationApplicationException(JThrowable arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline OperationApplicationException::OperationApplicationException(JString arg0, jint arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline OperationApplicationException::OperationApplicationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	inline jint OperationApplicationException::getNumSuccessfulYieldPoints() const
	{
		return callMethod<jint>(
			"getNumSuccessfulYieldPoints",
			"()I"
		);
	}
} // namespace android::content

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif

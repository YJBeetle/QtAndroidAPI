#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./IsolatedServiceException.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline IsolatedServiceException::IsolatedServiceException(jint arg0)
		: java::lang::Exception(
			"android.adservices.ondevicepersonalization.IsolatedServiceException",
			"(I)V",
			arg0
		) {}
	inline IsolatedServiceException::IsolatedServiceException(jint arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.adservices.ondevicepersonalization.IsolatedServiceException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		) {}
	inline IsolatedServiceException::IsolatedServiceException(jint arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.adservices.ondevicepersonalization.IsolatedServiceException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint IsolatedServiceException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif

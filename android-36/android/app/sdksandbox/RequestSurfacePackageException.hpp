#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./RequestSurfacePackageException.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	
	// Constructors
	inline RequestSurfacePackageException::RequestSurfacePackageException(jint arg0, JString arg1)
		: java::lang::Exception(
			"android.app.sdksandbox.RequestSurfacePackageException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline RequestSurfacePackageException::RequestSurfacePackageException(jint arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.app.sdksandbox.RequestSurfacePackageException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline RequestSurfacePackageException::RequestSurfacePackageException(jint arg0, JString arg1, JThrowable arg2, android::os::Bundle arg3)
		: java::lang::Exception(
			"android.app.sdksandbox.RequestSurfacePackageException",
			"(ILjava/lang/String;Ljava/lang/Throwable;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>(),
			arg3.object()
		) {}
	
	// Methods
	inline android::os::Bundle RequestSurfacePackageException::getExtraErrorInformation() const
	{
		return callObjectMethod(
			"getExtraErrorInformation",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint RequestSurfacePackageException::getRequestSurfacePackageErrorCode() const
	{
		return callMethod<jint>(
			"getRequestSurfacePackageErrorCode",
			"()I"
		);
	}
} // namespace android::app::sdksandbox

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif

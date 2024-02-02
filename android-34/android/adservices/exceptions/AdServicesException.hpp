#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./AdServicesException.def.hpp"

namespace android::adservices::exceptions
{
	// Fields
	
	// Constructors
	inline AdServicesException::AdServicesException(JString arg0)
		: java::lang::Exception(
			"android.adservices.exceptions.AdServicesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AdServicesException::AdServicesException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.adservices.exceptions.AdServicesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::adservices::exceptions

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::exceptions;
#endif

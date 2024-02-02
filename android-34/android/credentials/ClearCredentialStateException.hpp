#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ClearCredentialStateException.def.hpp"

namespace android::credentials
{
	// Fields
	inline JString ClearCredentialStateException::TYPE_UNKNOWN()
	{
		return getStaticObjectField(
			"android.credentials.ClearCredentialStateException",
			"TYPE_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ClearCredentialStateException::ClearCredentialStateException(JString arg0)
		: java::lang::Exception(
			"android.credentials.ClearCredentialStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ClearCredentialStateException::ClearCredentialStateException(JString arg0, JString arg1)
		: java::lang::Exception(
			"android.credentials.ClearCredentialStateException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline ClearCredentialStateException::ClearCredentialStateException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.credentials.ClearCredentialStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline ClearCredentialStateException::ClearCredentialStateException(JString arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.credentials.ClearCredentialStateException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JString ClearCredentialStateException::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::credentials

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif

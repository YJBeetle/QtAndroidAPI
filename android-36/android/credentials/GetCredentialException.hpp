#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./GetCredentialException.def.hpp"

namespace android::credentials
{
	// Fields
	inline JString GetCredentialException::TYPE_INTERRUPTED()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialException",
			"TYPE_INTERRUPTED",
			"Ljava/lang/String;"
		);
	}
	inline JString GetCredentialException::TYPE_NO_CREDENTIAL()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialException",
			"TYPE_NO_CREDENTIAL",
			"Ljava/lang/String;"
		);
	}
	inline JString GetCredentialException::TYPE_UNKNOWN()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialException",
			"TYPE_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString GetCredentialException::TYPE_USER_CANCELED()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialException",
			"TYPE_USER_CANCELED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline GetCredentialException::GetCredentialException(JString arg0)
		: java::lang::Exception(
			"android.credentials.GetCredentialException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline GetCredentialException::GetCredentialException(JString arg0, JString arg1)
		: java::lang::Exception(
			"android.credentials.GetCredentialException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline GetCredentialException::GetCredentialException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.credentials.GetCredentialException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline GetCredentialException::GetCredentialException(JString arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.credentials.GetCredentialException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JString GetCredentialException::getType() const
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

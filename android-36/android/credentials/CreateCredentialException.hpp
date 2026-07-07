#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./CreateCredentialException.def.hpp"

namespace android::credentials
{
	// Fields
	inline JString CreateCredentialException::TYPE_INTERRUPTED()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialException",
			"TYPE_INTERRUPTED",
			"Ljava/lang/String;"
		);
	}
	inline JString CreateCredentialException::TYPE_NO_CREATE_OPTIONS()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialException",
			"TYPE_NO_CREATE_OPTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString CreateCredentialException::TYPE_UNKNOWN()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialException",
			"TYPE_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString CreateCredentialException::TYPE_USER_CANCELED()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialException",
			"TYPE_USER_CANCELED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CreateCredentialException::CreateCredentialException(JString arg0)
		: java::lang::Exception(
			"android.credentials.CreateCredentialException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CreateCredentialException::CreateCredentialException(JString arg0, JString arg1)
		: java::lang::Exception(
			"android.credentials.CreateCredentialException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline CreateCredentialException::CreateCredentialException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.credentials.CreateCredentialException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline CreateCredentialException::CreateCredentialException(JString arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.credentials.CreateCredentialException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JString CreateCredentialException::getType() const
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

#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./ResultData.def.hpp"

namespace android::security::identity
{
	// Fields
	inline jint ResultData::STATUS_NOT_IN_REQUEST_MESSAGE()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NOT_IN_REQUEST_MESSAGE"
		);
	}
	inline jint ResultData::STATUS_NOT_REQUESTED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NOT_REQUESTED"
		);
	}
	inline jint ResultData::STATUS_NO_ACCESS_CONTROL_PROFILES()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NO_ACCESS_CONTROL_PROFILES"
		);
	}
	inline jint ResultData::STATUS_NO_SUCH_ENTRY()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NO_SUCH_ENTRY"
		);
	}
	inline jint ResultData::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_OK"
		);
	}
	inline jint ResultData::STATUS_READER_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_READER_AUTHENTICATION_FAILED"
		);
	}
	inline jint ResultData::STATUS_USER_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_USER_AUTHENTICATION_FAILED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray ResultData::getAuthenticatedData() const
	{
		return callObjectMethod(
			"getAuthenticatedData",
			"()[B"
		);
	}
	inline JByteArray ResultData::getEntry(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject ResultData::getEntryNames(JString arg0) const
	{
		return callObjectMethod(
			"getEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray ResultData::getMessageAuthenticationCode() const
	{
		return callObjectMethod(
			"getMessageAuthenticationCode",
			"()[B"
		);
	}
	inline JObject ResultData::getNamespaces() const
	{
		return callObjectMethod(
			"getNamespaces",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject ResultData::getRetrievedEntryNames(JString arg0) const
	{
		return callObjectMethod(
			"getRetrievedEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray ResultData::getStaticAuthenticationData() const
	{
		return callObjectMethod(
			"getStaticAuthenticationData",
			"()[B"
		);
	}
	inline jint ResultData::getStatus(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getStatus",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif

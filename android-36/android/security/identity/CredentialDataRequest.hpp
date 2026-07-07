#pragma once

#include "../../../JByteArray.hpp"
#include "./CredentialDataRequest.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject CredentialDataRequest::getDeviceSignedEntriesToRequest() const
	{
		return callObjectMethod(
			"getDeviceSignedEntriesToRequest",
			"()Ljava/util/Map;"
		);
	}
	inline JObject CredentialDataRequest::getIssuerSignedEntriesToRequest() const
	{
		return callObjectMethod(
			"getIssuerSignedEntriesToRequest",
			"()Ljava/util/Map;"
		);
	}
	inline JByteArray CredentialDataRequest::getReaderSignature() const
	{
		return callObjectMethod(
			"getReaderSignature",
			"()[B"
		);
	}
	inline JByteArray CredentialDataRequest::getRequestMessage() const
	{
		return callObjectMethod(
			"getRequestMessage",
			"()[B"
		);
	}
	inline jboolean CredentialDataRequest::isAllowUsingExhaustedKeys() const
	{
		return callMethod<jboolean>(
			"isAllowUsingExhaustedKeys",
			"()Z"
		);
	}
	inline jboolean CredentialDataRequest::isAllowUsingExpiredKeys() const
	{
		return callMethod<jboolean>(
			"isAllowUsingExpiredKeys",
			"()Z"
		);
	}
	inline jboolean CredentialDataRequest::isIncrementUseCount() const
	{
		return callMethod<jboolean>(
			"isIncrementUseCount",
			"()Z"
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif

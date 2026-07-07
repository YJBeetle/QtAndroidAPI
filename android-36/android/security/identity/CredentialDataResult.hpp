#pragma once

#include "../../../JByteArray.hpp"
#include "./CredentialDataResult.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray CredentialDataResult::getDeviceMac() const
	{
		return callObjectMethod(
			"getDeviceMac",
			"()[B"
		);
	}
	inline JByteArray CredentialDataResult::getDeviceNameSpaces() const
	{
		return callObjectMethod(
			"getDeviceNameSpaces",
			"()[B"
		);
	}
	inline JByteArray CredentialDataResult::getDeviceSignature() const
	{
		return callObjectMethod(
			"getDeviceSignature",
			"()[B"
		);
	}
	inline JObject CredentialDataResult::getDeviceSignedEntries() const
	{
		return callObjectMethod(
			"getDeviceSignedEntries",
			"()Landroid/security/identity/CredentialDataResult$Entries;"
		);
	}
	inline JObject CredentialDataResult::getIssuerSignedEntries() const
	{
		return callObjectMethod(
			"getIssuerSignedEntries",
			"()Landroid/security/identity/CredentialDataResult$Entries;"
		);
	}
	inline JByteArray CredentialDataResult::getStaticAuthenticationData() const
	{
		return callObjectMethod(
			"getStaticAuthenticationData",
			"()[B"
		);
	}
} // namespace android::security::identity

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif

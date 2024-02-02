#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CredentialOption.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject CredentialOption::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.CredentialOption",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString CredentialOption::SUPPORTED_ELEMENT_KEYS()
	{
		return getStaticObjectField(
			"android.credentials.CredentialOption",
			"SUPPORTED_ELEMENT_KEYS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CredentialOption::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject CredentialOption::getAllowedProviders() const
	{
		return callObjectMethod(
			"getAllowedProviders",
			"()Ljava/util/Set;"
		);
	}
	inline android::os::Bundle CredentialOption::getCandidateQueryData() const
	{
		return callObjectMethod(
			"getCandidateQueryData",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::os::Bundle CredentialOption::getCredentialRetrievalData() const
	{
		return callObjectMethod(
			"getCredentialRetrievalData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString CredentialOption::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean CredentialOption::isSystemProviderRequired() const
	{
		return callMethod<jboolean>(
			"isSystemProviderRequired",
			"()Z"
		);
	}
	inline JString CredentialOption::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CredentialOption::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif

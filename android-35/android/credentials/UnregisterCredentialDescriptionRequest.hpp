#pragma once

#include "./CredentialDescription.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./UnregisterCredentialDescriptionRequest.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject UnregisterCredentialDescriptionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.UnregisterCredentialDescriptionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline UnregisterCredentialDescriptionRequest::UnregisterCredentialDescriptionRequest(android::credentials::CredentialDescription arg0)
		: JObject(
			"android.credentials.UnregisterCredentialDescriptionRequest",
			"(Landroid/credentials/CredentialDescription;)V",
			arg0.object()
		) {}
	inline UnregisterCredentialDescriptionRequest::UnregisterCredentialDescriptionRequest(JObject arg0)
		: JObject(
			"android.credentials.UnregisterCredentialDescriptionRequest",
			"(Ljava/util/Set;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint UnregisterCredentialDescriptionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject UnregisterCredentialDescriptionRequest::getCredentialDescriptions() const
	{
		return callObjectMethod(
			"getCredentialDescriptions",
			"()Ljava/util/Set;"
		);
	}
	inline void UnregisterCredentialDescriptionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

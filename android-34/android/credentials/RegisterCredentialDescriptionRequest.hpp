#pragma once

#include "./CredentialDescription.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./RegisterCredentialDescriptionRequest.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject RegisterCredentialDescriptionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.RegisterCredentialDescriptionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RegisterCredentialDescriptionRequest::RegisterCredentialDescriptionRequest(android::credentials::CredentialDescription arg0)
		: JObject(
			"android.credentials.RegisterCredentialDescriptionRequest",
			"(Landroid/credentials/CredentialDescription;)V",
			arg0.object()
		) {}
	inline RegisterCredentialDescriptionRequest::RegisterCredentialDescriptionRequest(JObject arg0)
		: JObject(
			"android.credentials.RegisterCredentialDescriptionRequest",
			"(Ljava/util/Set;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint RegisterCredentialDescriptionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject RegisterCredentialDescriptionRequest::getCredentialDescriptions() const
	{
		return callObjectMethod(
			"getCredentialDescriptions",
			"()Ljava/util/Set;"
		);
	}
	inline void RegisterCredentialDescriptionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

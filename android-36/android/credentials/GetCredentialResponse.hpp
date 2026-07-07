#pragma once

#include "./Credential.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GetCredentialResponse.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject GetCredentialResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GetCredentialResponse::GetCredentialResponse(android::credentials::Credential arg0)
		: JObject(
			"android.credentials.GetCredentialResponse",
			"(Landroid/credentials/Credential;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint GetCredentialResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::credentials::Credential GetCredentialResponse::getCredential() const
	{
		return callObjectMethod(
			"getCredential",
			"()Landroid/credentials/Credential;"
		);
	}
	inline JString GetCredentialResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GetCredentialResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

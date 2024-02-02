#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GetCredentialRequest.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject GetCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.GetCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean GetCredentialRequest::alwaysSendAppInfoToProvider() const
	{
		return callMethod<jboolean>(
			"alwaysSendAppInfoToProvider",
			"()Z"
		);
	}
	inline jint GetCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject GetCredentialRequest::getCredentialOptions() const
	{
		return callObjectMethod(
			"getCredentialOptions",
			"()Ljava/util/List;"
		);
	}
	inline android::os::Bundle GetCredentialRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString GetCredentialRequest::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	inline JString GetCredentialRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GetCredentialRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

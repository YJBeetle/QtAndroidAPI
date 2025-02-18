#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CreateCredentialRequest.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject CreateCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CreateCredentialRequest::alwaysSendAppInfoToProvider() const
	{
		return callMethod<jboolean>(
			"alwaysSendAppInfoToProvider",
			"()Z"
		);
	}
	inline jint CreateCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle CreateCredentialRequest::getCandidateQueryData() const
	{
		return callObjectMethod(
			"getCandidateQueryData",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::os::Bundle CreateCredentialRequest::getCredentialData() const
	{
		return callObjectMethod(
			"getCredentialData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString CreateCredentialRequest::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	inline JString CreateCredentialRequest::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean CreateCredentialRequest::isSystemProviderRequired() const
	{
		return callMethod<jboolean>(
			"isSystemProviderRequired",
			"()Z"
		);
	}
	inline JString CreateCredentialRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CreateCredentialRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

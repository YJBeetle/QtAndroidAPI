#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ClearCredentialStateRequest.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject ClearCredentialStateRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.ClearCredentialStateRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ClearCredentialStateRequest::ClearCredentialStateRequest(android::os::Bundle arg0)
		: JObject(
			"android.credentials.ClearCredentialStateRequest",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ClearCredentialStateRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle ClearCredentialStateRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ClearCredentialStateRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ClearCredentialStateRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

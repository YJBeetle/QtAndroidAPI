#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CreateCredentialResponse.def.hpp"

namespace android::credentials
{
	// Fields
	inline JObject CreateCredentialResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.credentials.CreateCredentialResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CreateCredentialResponse::CreateCredentialResponse(android::os::Bundle arg0)
		: JObject(
			"android.credentials.CreateCredentialResponse",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint CreateCredentialResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle CreateCredentialResponse::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString CreateCredentialResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CreateCredentialResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

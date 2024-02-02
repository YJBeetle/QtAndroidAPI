#pragma once

#include "../../os/Parcel.def.hpp"
#include "./RemoteEntry.def.hpp"
#include "./BeginCreateCredentialResponse.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject BeginCreateCredentialResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.BeginCreateCredentialResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BeginCreateCredentialResponse::BeginCreateCredentialResponse()
		: JObject(
			"android.service.credentials.BeginCreateCredentialResponse",
			"()V"
		) {}
	
	// Methods
	inline jint BeginCreateCredentialResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject BeginCreateCredentialResponse::getCreateEntries() const
	{
		return callObjectMethod(
			"getCreateEntries",
			"()Ljava/util/List;"
		);
	}
	inline android::service::credentials::RemoteEntry BeginCreateCredentialResponse::getRemoteCreateEntry() const
	{
		return callObjectMethod(
			"getRemoteCreateEntry",
			"()Landroid/service/credentials/RemoteEntry;"
		);
	}
	inline void BeginCreateCredentialResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif

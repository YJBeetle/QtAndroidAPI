#pragma once

#include "../../os/Parcel.def.hpp"
#include "./RemoteEntry.def.hpp"
#include "./BeginGetCredentialResponse.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject BeginGetCredentialResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.BeginGetCredentialResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BeginGetCredentialResponse::BeginGetCredentialResponse()
		: JObject(
			"android.service.credentials.BeginGetCredentialResponse",
			"()V"
		) {}
	
	// Methods
	inline jint BeginGetCredentialResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject BeginGetCredentialResponse::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	inline JObject BeginGetCredentialResponse::getAuthenticationActions() const
	{
		return callObjectMethod(
			"getAuthenticationActions",
			"()Ljava/util/List;"
		);
	}
	inline JObject BeginGetCredentialResponse::getCredentialEntries() const
	{
		return callObjectMethod(
			"getCredentialEntries",
			"()Ljava/util/List;"
		);
	}
	inline android::service::credentials::RemoteEntry BeginGetCredentialResponse::getRemoteCredentialEntry() const
	{
		return callObjectMethod(
			"getRemoteCredentialEntry",
			"()Landroid/service/credentials/RemoteEntry;"
		);
	}
	inline void BeginGetCredentialResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

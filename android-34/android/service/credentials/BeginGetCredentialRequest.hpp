#pragma once

#include "../../os/Parcel.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "./BeginGetCredentialRequest.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject BeginGetCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.BeginGetCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BeginGetCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject BeginGetCredentialRequest::getBeginGetCredentialOptions() const
	{
		return callObjectMethod(
			"getBeginGetCredentialOptions",
			"()Ljava/util/List;"
		);
	}
	inline android::service::credentials::CallingAppInfo BeginGetCredentialRequest::getCallingAppInfo() const
	{
		return callObjectMethod(
			"getCallingAppInfo",
			"()Landroid/service/credentials/CallingAppInfo;"
		);
	}
	inline void BeginGetCredentialRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

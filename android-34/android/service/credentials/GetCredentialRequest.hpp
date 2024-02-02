#pragma once

#include "../../os/Parcel.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "./GetCredentialRequest.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject GetCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.GetCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GetCredentialRequest::GetCredentialRequest(android::service::credentials::CallingAppInfo arg0, JObject arg1)
		: JObject(
			"android.service.credentials.GetCredentialRequest",
			"(Landroid/service/credentials/CallingAppInfo;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint GetCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::service::credentials::CallingAppInfo GetCredentialRequest::getCallingAppInfo() const
	{
		return callObjectMethod(
			"getCallingAppInfo",
			"()Landroid/service/credentials/CallingAppInfo;"
		);
	}
	inline JObject GetCredentialRequest::getCredentialOptions() const
	{
		return callObjectMethod(
			"getCredentialOptions",
			"()Ljava/util/List;"
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
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif

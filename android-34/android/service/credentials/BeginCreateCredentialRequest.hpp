#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "../../../JString.hpp"
#include "./BeginCreateCredentialRequest.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject BeginCreateCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.BeginCreateCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BeginCreateCredentialRequest::BeginCreateCredentialRequest(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.service.credentials.BeginCreateCredentialRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline BeginCreateCredentialRequest::BeginCreateCredentialRequest(JString arg0, android::os::Bundle arg1, android::service::credentials::CallingAppInfo arg2)
		: JObject(
			"android.service.credentials.BeginCreateCredentialRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/service/credentials/CallingAppInfo;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint BeginCreateCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::service::credentials::CallingAppInfo BeginCreateCredentialRequest::getCallingAppInfo() const
	{
		return callObjectMethod(
			"getCallingAppInfo",
			"()Landroid/service/credentials/CallingAppInfo;"
		);
	}
	inline android::os::Bundle BeginCreateCredentialRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString BeginCreateCredentialRequest::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void BeginCreateCredentialRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

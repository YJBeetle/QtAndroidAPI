#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "../../../JString.hpp"
#include "./CreateCredentialRequest.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject CreateCredentialRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.CreateCredentialRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CreateCredentialRequest::CreateCredentialRequest(android::service::credentials::CallingAppInfo arg0, JString arg1, android::os::Bundle arg2)
		: JObject(
			"android.service.credentials.CreateCredentialRequest",
			"(Landroid/service/credentials/CallingAppInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint CreateCredentialRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::service::credentials::CallingAppInfo CreateCredentialRequest::getCallingAppInfo() const
	{
		return callObjectMethod(
			"getCallingAppInfo",
			"()Landroid/service/credentials/CallingAppInfo;"
		);
	}
	inline android::os::Bundle CreateCredentialRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString CreateCredentialRequest::getType() const
	{
		return callObjectMethod(
			"getType",
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
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif

#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./CallingAppInfo.def.hpp"
#include "../../../JString.hpp"
#include "./ClearCredentialStateRequest.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject ClearCredentialStateRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.ClearCredentialStateRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ClearCredentialStateRequest::ClearCredentialStateRequest(android::service::credentials::CallingAppInfo arg0, android::os::Bundle arg1)
		: JObject(
			"android.service.credentials.ClearCredentialStateRequest",
			"(Landroid/service/credentials/CallingAppInfo;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint ClearCredentialStateRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::service::credentials::CallingAppInfo ClearCredentialStateRequest::getCallingAppInfo() const
	{
		return callObjectMethod(
			"getCallingAppInfo",
			"()Landroid/service/credentials/CallingAppInfo;"
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
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif

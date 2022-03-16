#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./AccountAuthenticatorResponse.def.hpp"

namespace android::accounts
{
	// Fields
	inline JObject AccountAuthenticatorResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.AccountAuthenticatorResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AccountAuthenticatorResponse::AccountAuthenticatorResponse(android::os::Parcel arg0)
		: JObject(
			"android.accounts.AccountAuthenticatorResponse",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint AccountAuthenticatorResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void AccountAuthenticatorResponse::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AccountAuthenticatorResponse::onRequestContinued() const
	{
		callMethod<void>(
			"onRequestContinued",
			"()V"
		);
	}
	inline void AccountAuthenticatorResponse::onResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void AccountAuthenticatorResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

// Base class headers


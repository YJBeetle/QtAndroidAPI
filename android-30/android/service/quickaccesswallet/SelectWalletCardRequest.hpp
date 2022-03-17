#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SelectWalletCardRequest.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JObject SelectWalletCardRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.SelectWalletCardRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SelectWalletCardRequest::SelectWalletCardRequest(JString arg0)
		: JObject(
			"android.service.quickaccesswallet.SelectWalletCardRequest",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint SelectWalletCardRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SelectWalletCardRequest::getCardId() const
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		);
	}
	inline void SelectWalletCardRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

// Base class headers


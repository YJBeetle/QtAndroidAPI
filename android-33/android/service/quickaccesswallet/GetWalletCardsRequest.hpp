#pragma once

#include "../../os/Parcel.def.hpp"
#include "./GetWalletCardsRequest.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JObject GetWalletCardsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GetWalletCardsRequest::GetWalletCardsRequest(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsRequest",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint GetWalletCardsRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint GetWalletCardsRequest::getCardHeightPx() const
	{
		return callMethod<jint>(
			"getCardHeightPx",
			"()I"
		);
	}
	inline jint GetWalletCardsRequest::getCardWidthPx() const
	{
		return callMethod<jint>(
			"getCardWidthPx",
			"()I"
		);
	}
	inline jint GetWalletCardsRequest::getIconSizePx() const
	{
		return callMethod<jint>(
			"getIconSizePx",
			"()I"
		);
	}
	inline jint GetWalletCardsRequest::getMaxCards() const
	{
		return callMethod<jint>(
			"getMaxCards",
			"()I"
		);
	}
	inline void GetWalletCardsRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::quickaccesswallet;
#endif

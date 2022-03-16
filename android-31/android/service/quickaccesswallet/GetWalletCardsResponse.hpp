#pragma once

#include "../../os/Parcel.def.hpp"
#include "./GetWalletCardsResponse.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JObject GetWalletCardsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GetWalletCardsResponse::GetWalletCardsResponse(JObject arg0, jint arg1)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint GetWalletCardsResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint GetWalletCardsResponse::getSelectedIndex() const
	{
		return callMethod<jint>(
			"getSelectedIndex",
			"()I"
		);
	}
	inline JObject GetWalletCardsResponse::getWalletCards() const
	{
		return callObjectMethod(
			"getWalletCards",
			"()Ljava/util/List;"
		);
	}
	inline void GetWalletCardsResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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


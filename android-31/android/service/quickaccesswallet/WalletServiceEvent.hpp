#pragma once

#include "../../os/Parcel.def.hpp"
#include "./WalletServiceEvent.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JObject WalletServiceEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WalletServiceEvent::TYPE_NFC_PAYMENT_STARTED()
	{
		return getStaticField<jint>(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"TYPE_NFC_PAYMENT_STARTED"
		);
	}
	
	// Constructors
	inline WalletServiceEvent::WalletServiceEvent(jint arg0)
		: JObject(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint WalletServiceEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WalletServiceEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline void WalletServiceEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

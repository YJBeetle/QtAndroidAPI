#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./WalletCard.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline jint WalletCard::CARD_TYPE_NON_PAYMENT()
	{
		return getStaticField<jint>(
			"android.service.quickaccesswallet.WalletCard",
			"CARD_TYPE_NON_PAYMENT"
		);
	}
	inline jint WalletCard::CARD_TYPE_PAYMENT()
	{
		return getStaticField<jint>(
			"android.service.quickaccesswallet.WalletCard",
			"CARD_TYPE_PAYMENT"
		);
	}
	inline jint WalletCard::CARD_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.quickaccesswallet.WalletCard",
			"CARD_TYPE_UNKNOWN"
		);
	}
	inline JObject WalletCard::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.WalletCard",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WalletCard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon WalletCard::getCardIcon() const
	{
		return callObjectMethod(
			"getCardIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString WalletCard::getCardId() const
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::drawable::Icon WalletCard::getCardImage() const
	{
		return callObjectMethod(
			"getCardImage",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString WalletCard::getCardLabel() const
	{
		return callObjectMethod(
			"getCardLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject WalletCard::getCardLocations() const
	{
		return callObjectMethod(
			"getCardLocations",
			"()Ljava/util/List;"
		);
	}
	inline jint WalletCard::getCardType() const
	{
		return callMethod<jint>(
			"getCardType",
			"()I"
		);
	}
	inline JString WalletCard::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Icon WalletCard::getNonPaymentCardSecondaryImage() const
	{
		return callObjectMethod(
			"getNonPaymentCardSecondaryImage",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline android::app::PendingIntent WalletCard::getPendingIntent() const
	{
		return callObjectMethod(
			"getPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline void WalletCard::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

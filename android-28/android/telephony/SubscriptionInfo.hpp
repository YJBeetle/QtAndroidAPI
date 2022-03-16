#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./SubscriptionInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject SubscriptionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap SubscriptionInfo::createIconBitmap(android::content::Context arg0) const
	{
		return callObjectMethod(
			"createIconBitmap",
			"(Landroid/content/Context;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	inline jint SubscriptionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SubscriptionInfo::getCarrierName() const
	{
		return callObjectMethod(
			"getCarrierName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString SubscriptionInfo::getCountryIso() const
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline jint SubscriptionInfo::getDataRoaming() const
	{
		return callMethod<jint>(
			"getDataRoaming",
			"()I"
		);
	}
	inline JString SubscriptionInfo::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString SubscriptionInfo::getIccId() const
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	inline jint SubscriptionInfo::getIconTint() const
	{
		return callMethod<jint>(
			"getIconTint",
			"()I"
		);
	}
	inline jint SubscriptionInfo::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	inline jint SubscriptionInfo::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	inline JString SubscriptionInfo::getNumber() const
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint SubscriptionInfo::getSimSlotIndex() const
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	inline jint SubscriptionInfo::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline jboolean SubscriptionInfo::isEmbedded() const
	{
		return callMethod<jboolean>(
			"isEmbedded",
			"()Z"
		);
	}
	inline JString SubscriptionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SubscriptionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers


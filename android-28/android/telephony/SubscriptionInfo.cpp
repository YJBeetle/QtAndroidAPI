#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./SubscriptionInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject SubscriptionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap SubscriptionInfo::createIconBitmap(android::content::Context arg0) const
	{
		return callObjectMethod(
			"createIconBitmap",
			"(Landroid/content/Context;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	jint SubscriptionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SubscriptionInfo::getCarrierName() const
	{
		return callObjectMethod(
			"getCarrierName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SubscriptionInfo::getCountryIso() const
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getDataRoaming() const
	{
		return callMethod<jint>(
			"getDataRoaming",
			"()I"
		);
	}
	JString SubscriptionInfo::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SubscriptionInfo::getIccId() const
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getIconTint() const
	{
		return callMethod<jint>(
			"getIconTint",
			"()I"
		);
	}
	jint SubscriptionInfo::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jint SubscriptionInfo::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString SubscriptionInfo::getNumber() const
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getSimSlotIndex() const
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	jint SubscriptionInfo::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jboolean SubscriptionInfo::isEmbedded() const
	{
		return callMethod<jboolean>(
			"isEmbedded",
			"()Z"
		);
	}
	JString SubscriptionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SubscriptionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


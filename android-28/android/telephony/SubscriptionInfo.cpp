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
	
	// QJniObject forward
	SubscriptionInfo::SubscriptionInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Bitmap SubscriptionInfo::createIconBitmap(android::content::Context arg0)
	{
		return callObjectMethod(
			"createIconBitmap",
			"(Landroid/content/Context;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	jint SubscriptionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SubscriptionInfo::getCarrierName()
	{
		return callObjectMethod(
			"getCarrierName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SubscriptionInfo::getCountryIso()
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getDataRoaming()
	{
		return callMethod<jint>(
			"getDataRoaming",
			"()I"
		);
	}
	JString SubscriptionInfo::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SubscriptionInfo::getIccId()
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getIconTint()
	{
		return callMethod<jint>(
			"getIconTint",
			"()I"
		);
	}
	jint SubscriptionInfo::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jint SubscriptionInfo::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString SubscriptionInfo::getNumber()
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getSimSlotIndex()
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	jint SubscriptionInfo::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jboolean SubscriptionInfo::isEmbedded()
	{
		return callMethod<jboolean>(
			"isEmbedded",
			"()Z"
		);
	}
	JString SubscriptionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SubscriptionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


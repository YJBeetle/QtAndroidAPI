#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "../os/ParcelUuid.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
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
	
	// QAndroidJniObject forward
	SubscriptionInfo::SubscriptionInfo(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean SubscriptionInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SubscriptionInfo::getCardId()
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	jint SubscriptionInfo::getCarrierId()
	{
		return callMethod<jint>(
			"getCarrierId",
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
	android::os::ParcelUuid SubscriptionInfo::getGroupUuid()
	{
		return callObjectMethod(
			"getGroupUuid",
			"()Landroid/os/ParcelUuid;"
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
	JString SubscriptionInfo::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString SubscriptionInfo::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
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
	jint SubscriptionInfo::getSubscriptionType()
	{
		return callMethod<jint>(
			"getSubscriptionType",
			"()I"
		);
	}
	jint SubscriptionInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
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
	jboolean SubscriptionInfo::isOpportunistic()
	{
		return callMethod<jboolean>(
			"isOpportunistic",
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


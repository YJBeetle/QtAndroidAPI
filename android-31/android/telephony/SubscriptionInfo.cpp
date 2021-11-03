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
	jboolean SubscriptionInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SubscriptionInfo::getCardId() const
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	jint SubscriptionInfo::getCarrierId() const
	{
		return callMethod<jint>(
			"getCarrierId",
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
	android::os::ParcelUuid SubscriptionInfo::getGroupUuid() const
	{
		return callObjectMethod(
			"getGroupUuid",
			"()Landroid/os/ParcelUuid;"
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
	JString SubscriptionInfo::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint SubscriptionInfo::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString SubscriptionInfo::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
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
	jint SubscriptionInfo::getSubscriptionType() const
	{
		return callMethod<jint>(
			"getSubscriptionType",
			"()I"
		);
	}
	jint SubscriptionInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
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
	jboolean SubscriptionInfo::isOpportunistic() const
	{
		return callMethod<jboolean>(
			"isOpportunistic",
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


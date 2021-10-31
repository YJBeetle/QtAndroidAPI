#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "../os/ParcelUuid.hpp"
#include "./SubscriptionInfo.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass SubscriptionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SubscriptionInfo::SubscriptionInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean SubscriptionInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring SubscriptionInfo::getCarrierName()
	{
		return callObjectMethod(
			"getCarrierName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SubscriptionInfo::getCountryIso()
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionInfo::getDataRoaming()
	{
		return callMethod<jint>(
			"getDataRoaming",
			"()I"
		);
	}
	jstring SubscriptionInfo::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::os::ParcelUuid SubscriptionInfo::getGroupUuid()
	{
		return callObjectMethod(
			"getGroupUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	jstring SubscriptionInfo::getIccId()
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring SubscriptionInfo::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SubscriptionInfo::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring SubscriptionInfo::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SubscriptionInfo::getNumber()
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring SubscriptionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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


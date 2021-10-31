#include "../os/Parcel.hpp"
#include "./UiccCardInfo.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass UiccCardInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.UiccCardInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UiccCardInfo::UiccCardInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UiccCardInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UiccCardInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UiccCardInfo::getCardId()
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	jstring UiccCardInfo::getEid()
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UiccCardInfo::getIccId()
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UiccCardInfo::getSlotIndex()
	{
		return callMethod<jint>(
			"getSlotIndex",
			"()I"
		);
	}
	jint UiccCardInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UiccCardInfo::isEuicc()
	{
		return callMethod<jboolean>(
			"isEuicc",
			"()Z"
		);
	}
	jboolean UiccCardInfo::isRemovable()
	{
		return callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	jstring UiccCardInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UiccCardInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


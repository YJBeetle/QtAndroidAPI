#include "../os/Parcel.hpp"
#include "./UiccCardInfo.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject UiccCardInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.UiccCardInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	UiccCardInfo::UiccCardInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UiccCardInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UiccCardInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UiccCardInfo::getCardId()
	{
		return __thiz.callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	jstring UiccCardInfo::getEid()
	{
		return __thiz.callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UiccCardInfo::getIccId()
	{
		return __thiz.callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UiccCardInfo::getSlotIndex()
	{
		return __thiz.callMethod<jint>(
			"getSlotIndex",
			"()I"
		);
	}
	jint UiccCardInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UiccCardInfo::isEuicc()
	{
		return __thiz.callMethod<jboolean>(
			"isEuicc",
			"()Z"
		);
	}
	jboolean UiccCardInfo::isRemovable()
	{
		return __thiz.callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	jstring UiccCardInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UiccCardInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony


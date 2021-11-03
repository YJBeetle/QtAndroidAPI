#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UiccCardInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject UiccCardInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.UiccCardInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UiccCardInfo::UiccCardInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UiccCardInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UiccCardInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint UiccCardInfo::getCardId()
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	JString UiccCardInfo::getEid()
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	JString UiccCardInfo::getIccId()
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
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
	JString UiccCardInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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


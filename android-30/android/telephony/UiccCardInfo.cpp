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
	jint UiccCardInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UiccCardInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint UiccCardInfo::getCardId() const
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	JString UiccCardInfo::getEid() const
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	JString UiccCardInfo::getIccId() const
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	jint UiccCardInfo::getSlotIndex() const
	{
		return callMethod<jint>(
			"getSlotIndex",
			"()I"
		);
	}
	jint UiccCardInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UiccCardInfo::isEuicc() const
	{
		return callMethod<jboolean>(
			"isEuicc",
			"()Z"
		);
	}
	jboolean UiccCardInfo::isRemovable() const
	{
		return callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	JString UiccCardInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UiccCardInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


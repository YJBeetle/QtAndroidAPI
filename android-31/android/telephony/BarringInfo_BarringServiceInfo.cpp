#include "../os/Parcel.hpp"
#include "./BarringInfo_BarringServiceInfo.hpp"

namespace android::telephony
{
	// Fields
	jint BarringInfo_BarringServiceInfo::BARRING_TYPE_CONDITIONAL()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_CONDITIONAL"
		);
	}
	jint BarringInfo_BarringServiceInfo::BARRING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_NONE"
		);
	}
	jint BarringInfo_BarringServiceInfo::BARRING_TYPE_UNCONDITIONAL()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_UNCONDITIONAL"
		);
	}
	jint BarringInfo_BarringServiceInfo::BARRING_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_UNKNOWN"
		);
	}
	__JniBaseClass BarringInfo_BarringServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BarringInfo_BarringServiceInfo::BarringInfo_BarringServiceInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint BarringInfo_BarringServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BarringInfo_BarringServiceInfo::getBarringType()
	{
		return callMethod<jint>(
			"getBarringType",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::getConditionalBarringFactor()
	{
		return callMethod<jint>(
			"getConditionalBarringFactor",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::getConditionalBarringTimeSeconds()
	{
		return callMethod<jint>(
			"getConditionalBarringTimeSeconds",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::isBarred()
	{
		return callMethod<jboolean>(
			"isBarred",
			"()Z"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::isConditionallyBarred()
	{
		return callMethod<jboolean>(
			"isConditionallyBarred",
			"()Z"
		);
	}
	void BarringInfo_BarringServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


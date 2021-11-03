#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
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
	JObject BarringInfo_BarringServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BarringInfo_BarringServiceInfo::BarringInfo_BarringServiceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BarringInfo_BarringServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BarringInfo_BarringServiceInfo::getBarringType() const
	{
		return callMethod<jint>(
			"getBarringType",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::getConditionalBarringFactor() const
	{
		return callMethod<jint>(
			"getConditionalBarringFactor",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::getConditionalBarringTimeSeconds() const
	{
		return callMethod<jint>(
			"getConditionalBarringTimeSeconds",
			"()I"
		);
	}
	jint BarringInfo_BarringServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::isBarred() const
	{
		return callMethod<jboolean>(
			"isBarred",
			"()Z"
		);
	}
	jboolean BarringInfo_BarringServiceInfo::isConditionallyBarred() const
	{
		return callMethod<jboolean>(
			"isConditionallyBarred",
			"()Z"
		);
	}
	void BarringInfo_BarringServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


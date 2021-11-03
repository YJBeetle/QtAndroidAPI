#include "../os/Parcel.hpp"
#include "./BarringInfo_BarringServiceInfo.hpp"
#include "./BarringInfo.hpp"

namespace android::telephony
{
	// Fields
	jint BarringInfo::BARRING_SERVICE_TYPE_CS_FALLBACK()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_FALLBACK"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_CS_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_SERVICE"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_CS_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_VOICE"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_EMERGENCY"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_MMTEL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MMTEL_VIDEO"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_MMTEL_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MMTEL_VOICE"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_MO_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MO_DATA"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_MO_SIGNALLING()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MO_SIGNALLING"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_PS_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_PS_SERVICE"
		);
	}
	jint BarringInfo::BARRING_SERVICE_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_SMS"
		);
	}
	JObject BarringInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.BarringInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BarringInfo::BarringInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BarringInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BarringInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::telephony::BarringInfo_BarringServiceInfo BarringInfo::getBarringServiceInfo(jint arg0)
	{
		return callObjectMethod(
			"getBarringServiceInfo",
			"(I)Landroid/telephony/BarringInfo$BarringServiceInfo;",
			arg0
		);
	}
	jint BarringInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BarringInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BarringInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


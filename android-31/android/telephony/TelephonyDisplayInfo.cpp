#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TelephonyDisplayInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject TelephonyDisplayInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyDisplayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_LTE_CA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_LTE_CA"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NONE"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_ADVANCED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_ADVANCED"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_NSA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_NSA"
		);
	}
	jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE"
		);
	}
	
	// QJniObject forward
	TelephonyDisplayInfo::TelephonyDisplayInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TelephonyDisplayInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TelephonyDisplayInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TelephonyDisplayInfo::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint TelephonyDisplayInfo::getOverrideNetworkType()
	{
		return callMethod<jint>(
			"getOverrideNetworkType",
			"()I"
		);
	}
	jint TelephonyDisplayInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TelephonyDisplayInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TelephonyDisplayInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony


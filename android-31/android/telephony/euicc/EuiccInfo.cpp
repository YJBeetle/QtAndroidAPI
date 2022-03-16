#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./EuiccInfo.hpp"

namespace android::telephony::euicc
{
	// Fields
	JObject EuiccInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	EuiccInfo::EuiccInfo(JString arg0)
		: JObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint EuiccInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString EuiccInfo::getOsVersion() const
	{
		return callObjectMethod(
			"getOsVersion",
			"()Ljava/lang/String;"
		);
	}
	void EuiccInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


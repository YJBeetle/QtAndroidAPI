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
	
	// QAndroidJniObject forward
	EuiccInfo::EuiccInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	EuiccInfo::EuiccInfo(JString arg0)
		: JObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint EuiccInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString EuiccInfo::getOsVersion()
	{
		return callObjectMethod(
			"getOsVersion",
			"()Ljava/lang/String;"
		);
	}
	void EuiccInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


#include "../../os/Parcel.hpp"
#include "./EuiccInfo.hpp"

namespace android::telephony::euicc
{
	// Fields
	__JniBaseClass EuiccInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	EuiccInfo::EuiccInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EuiccInfo::EuiccInfo(jstring arg0)
		: __JniBaseClass(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint EuiccInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring EuiccInfo::getOsVersion()
	{
		return callObjectMethod(
			"getOsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
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


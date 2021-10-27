#include "../../os/Parcel.hpp"
#include "./EuiccInfo.hpp"

namespace android::telephony::euicc
{
	// Fields
	QAndroidJniObject EuiccInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.EuiccInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	EuiccInfo::EuiccInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EuiccInfo::EuiccInfo(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	EuiccInfo::EuiccInfo(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.euicc.EuiccInfo",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint EuiccInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring EuiccInfo::getOsVersion()
	{
		return __thiz.callObjectMethod(
			"getOsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void EuiccInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


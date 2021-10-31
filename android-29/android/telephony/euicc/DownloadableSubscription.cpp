#include "../../os/Parcel.hpp"
#include "./DownloadableSubscription.hpp"

namespace android::telephony::euicc
{
	// Fields
	QAndroidJniObject DownloadableSubscription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.euicc.DownloadableSubscription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DownloadableSubscription::DownloadableSubscription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DownloadableSubscription::forActivationCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.euicc.DownloadableSubscription",
			"forActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription;",
			arg0
		);
	}
	jint DownloadableSubscription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DownloadableSubscription::getConfirmationCode()
	{
		return __thiz.callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadableSubscription::getEncodedActivationCode()
	{
		return __thiz.callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DownloadableSubscription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


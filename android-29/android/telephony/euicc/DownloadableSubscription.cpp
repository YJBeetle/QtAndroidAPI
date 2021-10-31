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
	
	// QAndroidJniObject forward
	DownloadableSubscription::DownloadableSubscription(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DownloadableSubscription::getConfirmationCode()
	{
		return callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DownloadableSubscription::getEncodedActivationCode()
	{
		return callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DownloadableSubscription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


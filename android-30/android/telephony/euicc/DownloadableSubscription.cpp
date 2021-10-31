#include "../../os/Parcel.hpp"
#include "./DownloadableSubscription.hpp"

namespace android::telephony::euicc
{
	// Fields
	__JniBaseClass DownloadableSubscription::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.euicc.DownloadableSubscription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DownloadableSubscription::DownloadableSubscription(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::euicc::DownloadableSubscription DownloadableSubscription::forActivationCode(jstring arg0)
	{
		return callStaticObjectMethod(
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


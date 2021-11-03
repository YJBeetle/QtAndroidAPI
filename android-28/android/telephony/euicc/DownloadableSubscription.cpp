#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./DownloadableSubscription.hpp"

namespace android::telephony::euicc
{
	// Fields
	JObject DownloadableSubscription::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.euicc.DownloadableSubscription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DownloadableSubscription::DownloadableSubscription(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::euicc::DownloadableSubscription DownloadableSubscription::forActivationCode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.euicc.DownloadableSubscription",
			"forActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription;",
			arg0.object<jstring>()
		);
	}
	jint DownloadableSubscription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DownloadableSubscription::getConfirmationCode()
	{
		return callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;"
		);
	}
	JString DownloadableSubscription::getEncodedActivationCode()
	{
		return callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;"
		);
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


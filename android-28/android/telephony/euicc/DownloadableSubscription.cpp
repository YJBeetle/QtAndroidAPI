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
	jint DownloadableSubscription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DownloadableSubscription::getConfirmationCode() const
	{
		return callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;"
		);
	}
	JString DownloadableSubscription::getEncodedActivationCode() const
	{
		return callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;"
		);
	}
	void DownloadableSubscription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::euicc


#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./DownloadableSubscription.def.hpp"

namespace android::telephony::euicc
{
	// Fields
	inline JObject DownloadableSubscription::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.euicc.DownloadableSubscription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::euicc::DownloadableSubscription DownloadableSubscription::forActivationCode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.euicc.DownloadableSubscription",
			"forActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription;",
			arg0.object<jstring>()
		);
	}
	inline jint DownloadableSubscription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DownloadableSubscription::getConfirmationCode() const
	{
		return callObjectMethod(
			"getConfirmationCode",
			"()Ljava/lang/String;"
		);
	}
	inline JString DownloadableSubscription::getEncodedActivationCode() const
	{
		return callObjectMethod(
			"getEncodedActivationCode",
			"()Ljava/lang/String;"
		);
	}
	inline void DownloadableSubscription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::euicc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::euicc;
#endif

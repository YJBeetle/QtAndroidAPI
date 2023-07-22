#pragma once

#include "./DownloadableSubscription.def.hpp"
#include "../../../JString.hpp"
#include "./DownloadableSubscription_Builder.def.hpp"

namespace android::telephony::euicc
{
	// Fields
	
	// Constructors
	inline DownloadableSubscription_Builder::DownloadableSubscription_Builder(android::telephony::euicc::DownloadableSubscription arg0)
		: JObject(
			"android.telephony.euicc.DownloadableSubscription$Builder",
			"(Landroid/telephony/euicc/DownloadableSubscription;)V",
			arg0.object()
		) {}
	inline DownloadableSubscription_Builder::DownloadableSubscription_Builder(JString arg0)
		: JObject(
			"android.telephony.euicc.DownloadableSubscription$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::telephony::euicc::DownloadableSubscription DownloadableSubscription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/euicc/DownloadableSubscription;"
		);
	}
	inline android::telephony::euicc::DownloadableSubscription_Builder DownloadableSubscription_Builder::setConfirmationCode(JString arg0) const
	{
		return callObjectMethod(
			"setConfirmationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::euicc::DownloadableSubscription_Builder DownloadableSubscription_Builder::setEncodedActivationCode(JString arg0) const
	{
		return callObjectMethod(
			"setEncodedActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony::euicc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::euicc;
#endif

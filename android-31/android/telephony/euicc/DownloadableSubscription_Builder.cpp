#include "./DownloadableSubscription.hpp"
#include "../../../JString.hpp"
#include "./DownloadableSubscription_Builder.hpp"

namespace android::telephony::euicc
{
	// Fields
	
	// QJniObject forward
	DownloadableSubscription_Builder::DownloadableSubscription_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DownloadableSubscription_Builder::DownloadableSubscription_Builder(android::telephony::euicc::DownloadableSubscription arg0)
		: JObject(
			"android.telephony.euicc.DownloadableSubscription$Builder",
			"(Landroid/telephony/euicc/DownloadableSubscription;)V",
			arg0.object()
		) {}
	DownloadableSubscription_Builder::DownloadableSubscription_Builder(JString arg0)
		: JObject(
			"android.telephony.euicc.DownloadableSubscription$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::telephony::euicc::DownloadableSubscription DownloadableSubscription_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/euicc/DownloadableSubscription;"
		);
	}
	android::telephony::euicc::DownloadableSubscription_Builder DownloadableSubscription_Builder::setConfirmationCode(JString arg0)
	{
		return callObjectMethod(
			"setConfirmationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::euicc::DownloadableSubscription_Builder DownloadableSubscription_Builder::setEncodedActivationCode(JString arg0)
	{
		return callObjectMethod(
			"setEncodedActivationCode",
			"(Ljava/lang/String;)Landroid/telephony/euicc/DownloadableSubscription$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony::euicc


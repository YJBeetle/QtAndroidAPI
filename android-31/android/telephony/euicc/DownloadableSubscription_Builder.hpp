#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::euicc
{
	class DownloadableSubscription;
}

namespace android::telephony::euicc
{
	class DownloadableSubscription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadableSubscription_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadableSubscription_Builder(QAndroidJniObject obj);
		
		// Constructors
		DownloadableSubscription_Builder(android::telephony::euicc::DownloadableSubscription arg0);
		DownloadableSubscription_Builder(jstring arg0);
		
		// Methods
		android::telephony::euicc::DownloadableSubscription build();
		android::telephony::euicc::DownloadableSubscription_Builder setConfirmationCode(jstring arg0);
		android::telephony::euicc::DownloadableSubscription_Builder setEncodedActivationCode(jstring arg0);
	};
} // namespace android::telephony::euicc


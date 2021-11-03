#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::telephony::euicc
{
	class DownloadableSubscription;
}
namespace android::telephony::euicc
{
	class EuiccInfo;
}
class JString;

namespace android::telephony::euicc
{
	class EuiccManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS();
		static JString ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_ERROR();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_OK();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION();
		static JString META_DATA_CARRIER_ICON();
		
		// QJniObject forward
		template<typename ...Ts> explicit EuiccManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EuiccManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::telephony::euicc::EuiccManager createForCardId(jint arg0);
		void deleteSubscription(jint arg0, android::app::PendingIntent arg1);
		void downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2);
		JString getEid();
		android::telephony::euicc::EuiccInfo getEuiccInfo();
		jboolean isEnabled();
		void startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3);
		void switchToSubscription(jint arg0, android::app::PendingIntent arg1);
		void updateSubscriptionNickname(jint arg0, JString arg1, android::app::PendingIntent arg2);
	};
} // namespace android::telephony::euicc


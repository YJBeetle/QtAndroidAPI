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
		static JString ACTION_START_EUICC_ACTIVATION();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_ERROR();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_OK();
		static jint EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR();
		static jint ERROR_ADDRESS_MISSING();
		static jint ERROR_CARRIER_LOCKED();
		static jint ERROR_CERTIFICATE_ERROR();
		static jint ERROR_CONNECTION_ERROR();
		static jint ERROR_DISALLOWED_BY_PPR();
		static jint ERROR_EUICC_INSUFFICIENT_MEMORY();
		static jint ERROR_EUICC_MISSING();
		static jint ERROR_INCOMPATIBLE_CARRIER();
		static jint ERROR_INSTALL_PROFILE();
		static jint ERROR_INVALID_ACTIVATION_CODE();
		static jint ERROR_INVALID_CONFIRMATION_CODE();
		static jint ERROR_INVALID_RESPONSE();
		static jint ERROR_NO_PROFILES_AVAILABLE();
		static jint ERROR_OPERATION_BUSY();
		static jint ERROR_SIM_MISSING();
		static jint ERROR_TIME_OUT();
		static jint ERROR_UNSUPPORTED_VERSION();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_ERROR_CODE();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_OPERATION_CODE();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_REASON_CODE();
		static JString EXTRA_EMBEDDED_SUBSCRIPTION_SMDX_SUBJECT_CODE();
		static JString EXTRA_USE_QR_SCANNER();
		static JString META_DATA_CARRIER_ICON();
		static jint OPERATION_APDU();
		static jint OPERATION_DOWNLOAD();
		static jint OPERATION_EUICC_CARD();
		static jint OPERATION_EUICC_GSMA();
		static jint OPERATION_HTTP();
		static jint OPERATION_METADATA();
		static jint OPERATION_SIM_SLOT();
		static jint OPERATION_SMDX();
		static jint OPERATION_SMDX_SUBJECT_REASON_CODE();
		static jint OPERATION_SWITCH();
		static jint OPERATION_SYSTEM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EuiccManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EuiccManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::telephony::euicc::EuiccManager createForCardId(jint arg0) const;
		void deleteSubscription(jint arg0, android::app::PendingIntent arg1) const;
		void downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2) const;
		JString getEid() const;
		android::telephony::euicc::EuiccInfo getEuiccInfo() const;
		jboolean isEnabled() const;
		void startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3) const;
		void switchToSubscription(jint arg0, android::app::PendingIntent arg1) const;
		void updateSubscriptionNickname(jint arg0, JString arg1, android::app::PendingIntent arg2) const;
	};
} // namespace android::telephony::euicc


#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class BarringInfo;
}
namespace android::telephony
{
	class CellIdentity;
}
namespace android::telephony
{
	class CellLocation;
}
namespace android::telephony
{
	class PreciseDataConnectionState;
}
namespace android::telephony
{
	class ServiceState;
}
namespace android::telephony
{
	class SignalStrength;
}
namespace android::telephony
{
	class TelephonyDisplayInfo;
}
namespace android::telephony::ims
{
	class ImsReasonInfo;
}
class JString;

namespace android::telephony
{
	class PhoneStateListener : public JObject
	{
	public:
		// Fields
		static jint LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE();
		static jint LISTEN_BARRING_INFO();
		static jint LISTEN_CALL_DISCONNECT_CAUSES();
		static jint LISTEN_CALL_FORWARDING_INDICATOR();
		static jint LISTEN_CALL_STATE();
		static jint LISTEN_CELL_INFO();
		static jint LISTEN_CELL_LOCATION();
		static jint LISTEN_DATA_ACTIVITY();
		static jint LISTEN_DATA_CONNECTION_STATE();
		static jint LISTEN_DISPLAY_INFO_CHANGED();
		static jint LISTEN_EMERGENCY_NUMBER_LIST();
		static jint LISTEN_IMS_CALL_DISCONNECT_CAUSES();
		static jint LISTEN_MESSAGE_WAITING_INDICATOR();
		static jint LISTEN_NONE();
		static jint LISTEN_PRECISE_DATA_CONNECTION_STATE();
		static jint LISTEN_REGISTRATION_FAILURE();
		static jint LISTEN_SERVICE_STATE();
		static jint LISTEN_SIGNAL_STRENGTH();
		static jint LISTEN_SIGNAL_STRENGTHS();
		static jint LISTEN_USER_MOBILE_DATA_STATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneStateListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneStateListener(QJniObject obj);
		
		// Constructors
		PhoneStateListener();
		PhoneStateListener(JObject arg0);
		
		// Methods
		void onActiveDataSubscriptionIdChanged(jint arg0) const;
		void onBarringInfoChanged(android::telephony::BarringInfo arg0) const;
		void onCallDisconnectCauseChanged(jint arg0, jint arg1) const;
		void onCallForwardingIndicatorChanged(jboolean arg0) const;
		void onCallStateChanged(jint arg0, JString arg1) const;
		void onCellInfoChanged(JObject arg0) const;
		void onCellLocationChanged(android::telephony::CellLocation arg0) const;
		void onDataActivity(jint arg0) const;
		void onDataConnectionStateChanged(jint arg0) const;
		void onDataConnectionStateChanged(jint arg0, jint arg1) const;
		void onDisplayInfoChanged(android::telephony::TelephonyDisplayInfo arg0) const;
		void onEmergencyNumberListChanged(JObject arg0) const;
		void onImsCallDisconnectCauseChanged(android::telephony::ims::ImsReasonInfo arg0) const;
		void onMessageWaitingIndicatorChanged(jboolean arg0) const;
		void onPreciseDataConnectionStateChanged(android::telephony::PreciseDataConnectionState arg0) const;
		void onRegistrationFailed(android::telephony::CellIdentity arg0, JString arg1, jint arg2, jint arg3, jint arg4) const;
		void onServiceStateChanged(android::telephony::ServiceState arg0) const;
		void onSignalStrengthChanged(jint arg0) const;
		void onSignalStrengthsChanged(android::telephony::SignalStrength arg0) const;
		void onUserMobileDataStateChanged(jboolean arg0) const;
	};
} // namespace android::telephony


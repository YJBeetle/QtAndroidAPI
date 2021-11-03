#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class CellLocation;
}
namespace android::telephony
{
	class ServiceState;
}
namespace android::telephony
{
	class SignalStrength;
}
class JString;

namespace android::telephony
{
	class PhoneStateListener : public JObject
	{
	public:
		// Fields
		static jint LISTEN_CALL_FORWARDING_INDICATOR();
		static jint LISTEN_CALL_STATE();
		static jint LISTEN_CELL_INFO();
		static jint LISTEN_CELL_LOCATION();
		static jint LISTEN_DATA_ACTIVITY();
		static jint LISTEN_DATA_CONNECTION_STATE();
		static jint LISTEN_MESSAGE_WAITING_INDICATOR();
		static jint LISTEN_NONE();
		static jint LISTEN_SERVICE_STATE();
		static jint LISTEN_SIGNAL_STRENGTH();
		static jint LISTEN_SIGNAL_STRENGTHS();
		static jint LISTEN_USER_MOBILE_DATA_STATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneStateListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneStateListener(QJniObject obj);
		
		// Constructors
		PhoneStateListener();
		
		// Methods
		void onCallForwardingIndicatorChanged(jboolean arg0);
		void onCallStateChanged(jint arg0, JString arg1);
		void onCellInfoChanged(JObject arg0);
		void onCellLocationChanged(android::telephony::CellLocation arg0);
		void onDataActivity(jint arg0);
		void onDataConnectionStateChanged(jint arg0);
		void onDataConnectionStateChanged(jint arg0, jint arg1);
		void onMessageWaitingIndicatorChanged(jboolean arg0);
		void onServiceStateChanged(android::telephony::ServiceState arg0);
		void onSignalStrengthChanged(jint arg0);
		void onSignalStrengthsChanged(android::telephony::SignalStrength arg0);
		void onUserMobileDataStateChanged(jboolean arg0);
	};
} // namespace android::telephony


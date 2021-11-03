#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class PhoneAccount;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JString;

namespace android::telecom
{
	class TelecomManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHANGE_DEFAULT_DIALER();
		static JString ACTION_CHANGE_PHONE_ACCOUNTS();
		static JString ACTION_CONFIGURE_PHONE_ACCOUNT();
		static JString ACTION_DEFAULT_CALL_SCREENING_APP_CHANGED();
		static JString ACTION_DEFAULT_DIALER_CHANGED();
		static JString ACTION_INCOMING_CALL();
		static JString ACTION_PHONE_ACCOUNT_REGISTERED();
		static JString ACTION_PHONE_ACCOUNT_UNREGISTERED();
		static JString ACTION_POST_CALL();
		static JString ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS();
		static JString ACTION_SHOW_CALL_SETTINGS();
		static JString ACTION_SHOW_MISSED_CALLS_NOTIFICATION();
		static JString ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS();
		static jchar DTMF_CHARACTER_PAUSE();
		static jchar DTMF_CHARACTER_WAIT();
		static jint DURATION_LONG();
		static jint DURATION_MEDIUM();
		static jint DURATION_SHORT();
		static jint DURATION_VERY_SHORT();
		static JString EXTRA_CALL_BACK_NUMBER();
		static JString EXTRA_CALL_DISCONNECT_CAUSE();
		static JString EXTRA_CALL_DISCONNECT_MESSAGE();
		static JString EXTRA_CALL_DURATION();
		static JString EXTRA_CALL_NETWORK_TYPE();
		static JString EXTRA_CALL_SUBJECT();
		static JString EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME();
		static JString EXTRA_DEFAULT_CALL_SCREENING_APP_COMPONENT_NAME();
		static JString EXTRA_DISCONNECT_CAUSE();
		static JString EXTRA_HANDLE();
		static JString EXTRA_HAS_PICTURE();
		static JString EXTRA_INCOMING_CALL_ADDRESS();
		static JString EXTRA_INCOMING_CALL_EXTRAS();
		static JString EXTRA_INCOMING_VIDEO_STATE();
		static JString EXTRA_IS_DEFAULT_CALL_SCREENING_APP();
		static JString EXTRA_LOCATION();
		static JString EXTRA_NOTIFICATION_COUNT();
		static JString EXTRA_NOTIFICATION_PHONE_NUMBER();
		static JString EXTRA_OUTGOING_CALL_EXTRAS();
		static JString EXTRA_OUTGOING_PICTURE();
		static JString EXTRA_PHONE_ACCOUNT_HANDLE();
		static JString EXTRA_PICTURE_URI();
		static JString EXTRA_PRIORITY();
		static JString EXTRA_START_CALL_WITH_RTT();
		static JString EXTRA_START_CALL_WITH_SPEAKERPHONE();
		static JString EXTRA_START_CALL_WITH_VIDEO_STATE();
		static JString EXTRA_USE_ASSISTED_DIALING();
		static JString GATEWAY_ORIGINAL_ADDRESS();
		static JString GATEWAY_PROVIDER_PACKAGE();
		static JString METADATA_INCLUDE_EXTERNAL_CALLS();
		static JString METADATA_INCLUDE_SELF_MANAGED_CALLS();
		static JString METADATA_IN_CALL_SERVICE_CAR_MODE_UI();
		static JString METADATA_IN_CALL_SERVICE_RINGING();
		static JString METADATA_IN_CALL_SERVICE_UI();
		static jint PRESENTATION_ALLOWED();
		static jint PRESENTATION_PAYPHONE();
		static jint PRESENTATION_RESTRICTED();
		static jint PRESENTATION_UNKNOWN();
		static jint PRIORITY_NORMAL();
		static jint PRIORITY_URGENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelecomManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelecomManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void acceptHandover(android::net::Uri arg0, jint arg1, android::telecom::PhoneAccountHandle arg2);
		void acceptRingingCall();
		void acceptRingingCall(jint arg0);
		void addNewIncomingCall(android::telecom::PhoneAccountHandle arg0, android::os::Bundle arg1);
		void addNewIncomingConference(android::telecom::PhoneAccountHandle arg0, android::os::Bundle arg1);
		void cancelMissedCallsNotification();
		android::content::Intent createManageBlockedNumbersIntent();
		jboolean endCall();
		android::net::Uri getAdnUriForPhoneAccount(android::telecom::PhoneAccountHandle arg0);
		JObject getCallCapablePhoneAccounts();
		JString getDefaultDialerPackage();
		android::telecom::PhoneAccountHandle getDefaultOutgoingPhoneAccount(JString arg0);
		JString getLine1Number(android::telecom::PhoneAccountHandle arg0);
		android::telecom::PhoneAccount getPhoneAccount(android::telecom::PhoneAccountHandle arg0);
		JObject getSelfManagedPhoneAccounts();
		android::telecom::PhoneAccountHandle getSimCallManager();
		android::telecom::PhoneAccountHandle getSimCallManagerForSubscription(jint arg0);
		JString getSystemDialerPackage();
		android::telecom::PhoneAccountHandle getUserSelectedOutgoingPhoneAccount();
		JString getVoiceMailNumber(android::telecom::PhoneAccountHandle arg0);
		jboolean handleMmi(JString arg0);
		jboolean handleMmi(JString arg0, android::telecom::PhoneAccountHandle arg1);
		jboolean hasManageOngoingCallsPermission();
		jboolean isInCall();
		jboolean isInManagedCall();
		jboolean isIncomingCallPermitted(android::telecom::PhoneAccountHandle arg0);
		jboolean isOutgoingCallPermitted(android::telecom::PhoneAccountHandle arg0);
		jboolean isTtySupported();
		jboolean isVoiceMailNumber(android::telecom::PhoneAccountHandle arg0, JString arg1);
		void placeCall(android::net::Uri arg0, android::os::Bundle arg1);
		void registerPhoneAccount(android::telecom::PhoneAccount arg0);
		void showInCallScreen(jboolean arg0);
		void silenceRinger();
		void startConference(JObject arg0, android::os::Bundle arg1);
		void unregisterPhoneAccount(android::telecom::PhoneAccountHandle arg0);
	};
} // namespace android::telecom


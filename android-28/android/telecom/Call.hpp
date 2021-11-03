#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::telecom
{
	class Call_Callback;
}
namespace android::telecom
{
	class Call_Details;
}
namespace android::telecom
{
	class Call_RttCall;
}
namespace android::telecom
{
	class InCallService_VideoCall;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JString;

namespace android::telecom
{
	class Call : public JObject
	{
	public:
		// Fields
		static JString AVAILABLE_PHONE_ACCOUNTS();
		static JString EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS();
		static jint STATE_ACTIVE();
		static jint STATE_CONNECTING();
		static jint STATE_DIALING();
		static jint STATE_DISCONNECTED();
		static jint STATE_DISCONNECTING();
		static jint STATE_HOLDING();
		static jint STATE_NEW();
		static jint STATE_PULLING_CALL();
		static jint STATE_RINGING();
		static jint STATE_SELECT_PHONE_ACCOUNT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Call(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Call(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void answer(jint arg0);
		void conference(android::telecom::Call arg0);
		void deflect(android::net::Uri arg0);
		void disconnect();
		JObject getCannedTextResponses();
		JObject getChildren();
		JObject getConferenceableCalls();
		android::telecom::Call_Details getDetails();
		android::telecom::Call getParent();
		JString getRemainingPostDialSequence();
		android::telecom::Call_RttCall getRttCall();
		jint getState();
		android::telecom::InCallService_VideoCall getVideoCall();
		void handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2);
		void hold();
		jboolean isRttActive();
		void mergeConference();
		void phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1);
		void playDtmfTone(jchar arg0);
		void postDialContinue(jboolean arg0);
		void pullExternalCall();
		void putExtras(android::os::Bundle arg0);
		void registerCallback(android::telecom::Call_Callback arg0);
		void registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1);
		void reject(jboolean arg0, JString arg1);
		void removeExtras(JArray arg0);
		void removeExtras(JObject arg0);
		void respondToRttRequest(jint arg0, jboolean arg1);
		void sendCallEvent(JString arg0, android::os::Bundle arg1);
		void sendRttRequest();
		void splitFromConference();
		void stopDtmfTone();
		void stopRtt();
		void swapConference();
		JString toString();
		void unhold();
		void unregisterCallback(android::telecom::Call_Callback arg0);
	};
} // namespace android::telecom


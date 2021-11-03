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
		
		// QJniObject forward
		template<typename ...Ts> explicit Call(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Call(QJniObject obj);
		
		// Constructors
		
		// Methods
		void answer(jint arg0) const;
		void conference(android::telecom::Call arg0) const;
		void deflect(android::net::Uri arg0) const;
		void disconnect() const;
		JObject getCannedTextResponses() const;
		JObject getChildren() const;
		JObject getConferenceableCalls() const;
		android::telecom::Call_Details getDetails() const;
		android::telecom::Call getParent() const;
		JString getRemainingPostDialSequence() const;
		android::telecom::Call_RttCall getRttCall() const;
		jint getState() const;
		android::telecom::InCallService_VideoCall getVideoCall() const;
		void handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2) const;
		void hold() const;
		jboolean isRttActive() const;
		void mergeConference() const;
		void phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const;
		void playDtmfTone(jchar arg0) const;
		void postDialContinue(jboolean arg0) const;
		void pullExternalCall() const;
		void putExtras(android::os::Bundle arg0) const;
		void registerCallback(android::telecom::Call_Callback arg0) const;
		void registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1) const;
		void reject(jboolean arg0, JString arg1) const;
		void removeExtras(JArray arg0) const;
		void removeExtras(JObject arg0) const;
		void respondToRttRequest(jint arg0, jboolean arg1) const;
		void sendCallEvent(JString arg0, android::os::Bundle arg1) const;
		void sendRttRequest() const;
		void splitFromConference() const;
		void stopDtmfTone() const;
		void stopRtt() const;
		void swapConference() const;
		JString toString() const;
		void unhold() const;
		void unregisterCallback(android::telecom::Call_Callback arg0) const;
	};
} // namespace android::telecom


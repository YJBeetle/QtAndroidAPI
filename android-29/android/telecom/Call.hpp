#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telecom
{
	class Call : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AVAILABLE_PHONE_ACCOUNTS();
		static jstring EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS();
		static jstring EXTRA_SILENT_RINGING_REQUESTED();
		static jstring EXTRA_SUGGESTED_PHONE_ACCOUNTS();
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
		template<typename ...Ts> explicit Call(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Call(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void answer(jint arg0);
		void conference(android::telecom::Call arg0);
		void deflect(android::net::Uri arg0);
		void disconnect();
		QAndroidJniObject getCannedTextResponses();
		QAndroidJniObject getChildren();
		QAndroidJniObject getConferenceableCalls();
		QAndroidJniObject getDetails();
		QAndroidJniObject getParent();
		jstring getRemainingPostDialSequence();
		QAndroidJniObject getRttCall();
		jint getState();
		QAndroidJniObject getVideoCall();
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
		void reject(jboolean arg0, jstring arg1);
		void removeExtras(jarray arg0);
		void removeExtras(__JniBaseClass arg0);
		void respondToRttRequest(jint arg0, jboolean arg1);
		void sendCallEvent(jstring arg0, android::os::Bundle arg1);
		void sendRttRequest();
		void splitFromConference();
		void stopDtmfTone();
		void stopRtt();
		void swapConference();
		jstring toString();
		void unhold();
		void unregisterCallback(android::telecom::Call_Callback arg0);
	};
} // namespace android::telecom


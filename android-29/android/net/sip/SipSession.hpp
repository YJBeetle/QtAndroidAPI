#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::sip
{
	class SipProfile;
}
namespace android::net::sip
{
	class SipSession_Listener;
}

namespace android::net::sip
{
	class SipSession : public __JniBaseClass
	{
	public:
		// Fields
		
		SipSession(QAndroidJniObject obj);
		// Constructors
		SipSession() = default;
		
		// Methods
		void answerCall(jstring arg0, jint arg1);
		void changeCall(jstring arg0, jint arg1);
		void endCall();
		jstring getCallId();
		jstring getLocalIp();
		QAndroidJniObject getLocalProfile();
		QAndroidJniObject getPeerProfile();
		jint getState();
		jboolean isInCall();
		void makeCall(android::net::sip::SipProfile arg0, jstring arg1, jint arg2);
		void _register(jint arg0);
		void setListener(android::net::sip::SipSession_Listener arg0);
		void unregister();
	};
} // namespace android::net::sip


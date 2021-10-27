#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::sip
{
	class SipSession_State : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEREGISTERING();
		static jint INCOMING_CALL();
		static jint INCOMING_CALL_ANSWERING();
		static jint IN_CALL();
		static jint NOT_DEFINED();
		static jint OUTGOING_CALL();
		static jint OUTGOING_CALL_CANCELING();
		static jint OUTGOING_CALL_RING_BACK();
		static jint PINGING();
		static jint READY_TO_CALL();
		static jint REGISTERING();
		
		SipSession_State(QAndroidJniObject obj);
		// Constructors
		SipSession_State() = default;
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::net::sip


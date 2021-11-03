#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::net::sip
{
	class SipSession_State : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SipSession_State(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipSession_State(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString toString(jint arg0);
	};
} // namespace android::net::sip


#pragma once

#include "../../../JString.hpp"
#include "./SipSession_State.def.hpp"

namespace android::net::sip
{
	// Fields
	inline jint SipSession_State::DEREGISTERING()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"DEREGISTERING"
		);
	}
	inline jint SipSession_State::INCOMING_CALL()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"INCOMING_CALL"
		);
	}
	inline jint SipSession_State::INCOMING_CALL_ANSWERING()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"INCOMING_CALL_ANSWERING"
		);
	}
	inline jint SipSession_State::IN_CALL()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"IN_CALL"
		);
	}
	inline jint SipSession_State::NOT_DEFINED()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"NOT_DEFINED"
		);
	}
	inline jint SipSession_State::OUTGOING_CALL()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL"
		);
	}
	inline jint SipSession_State::OUTGOING_CALL_CANCELING()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL_CANCELING"
		);
	}
	inline jint SipSession_State::OUTGOING_CALL_RING_BACK()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"OUTGOING_CALL_RING_BACK"
		);
	}
	inline jint SipSession_State::PINGING()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"PINGING"
		);
	}
	inline jint SipSession_State::READY_TO_CALL()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"READY_TO_CALL"
		);
	}
	inline jint SipSession_State::REGISTERING()
	{
		return getStaticField<jint>(
			"android.net.sip.SipSession$State",
			"REGISTERING"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString SipSession_State::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipSession$State",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::net::sip

// Base class headers


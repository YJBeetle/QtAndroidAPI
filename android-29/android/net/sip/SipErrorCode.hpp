#pragma once

#include "../../../JString.hpp"
#include "./SipErrorCode.def.hpp"

namespace android::net::sip
{
	// Fields
	inline jint SipErrorCode::CLIENT_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CLIENT_ERROR"
		);
	}
	inline jint SipErrorCode::CROSS_DOMAIN_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CROSS_DOMAIN_AUTHENTICATION"
		);
	}
	inline jint SipErrorCode::DATA_CONNECTION_LOST()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"DATA_CONNECTION_LOST"
		);
	}
	inline jint SipErrorCode::INVALID_CREDENTIALS()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_CREDENTIALS"
		);
	}
	inline jint SipErrorCode::INVALID_REMOTE_URI()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_REMOTE_URI"
		);
	}
	inline jint SipErrorCode::IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"IN_PROGRESS"
		);
	}
	inline jint SipErrorCode::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"NO_ERROR"
		);
	}
	inline jint SipErrorCode::PEER_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"PEER_NOT_REACHABLE"
		);
	}
	inline jint SipErrorCode::SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_ERROR"
		);
	}
	inline jint SipErrorCode::SERVER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_UNREACHABLE"
		);
	}
	inline jint SipErrorCode::SOCKET_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SOCKET_ERROR"
		);
	}
	inline jint SipErrorCode::TIME_OUT()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TIME_OUT"
		);
	}
	inline jint SipErrorCode::TRANSACTION_TERMINTED()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TRANSACTION_TERMINTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString SipErrorCode::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipErrorCode",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::net::sip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::sip;
#endif

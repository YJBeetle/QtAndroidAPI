#include "../../../JString.hpp"
#include "./SipErrorCode.hpp"

namespace android::net::sip
{
	// Fields
	jint SipErrorCode::CLIENT_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CLIENT_ERROR"
		);
	}
	jint SipErrorCode::CROSS_DOMAIN_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CROSS_DOMAIN_AUTHENTICATION"
		);
	}
	jint SipErrorCode::DATA_CONNECTION_LOST()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"DATA_CONNECTION_LOST"
		);
	}
	jint SipErrorCode::INVALID_CREDENTIALS()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_CREDENTIALS"
		);
	}
	jint SipErrorCode::INVALID_REMOTE_URI()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_REMOTE_URI"
		);
	}
	jint SipErrorCode::IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"IN_PROGRESS"
		);
	}
	jint SipErrorCode::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"NO_ERROR"
		);
	}
	jint SipErrorCode::PEER_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"PEER_NOT_REACHABLE"
		);
	}
	jint SipErrorCode::SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_ERROR"
		);
	}
	jint SipErrorCode::SERVER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_UNREACHABLE"
		);
	}
	jint SipErrorCode::SOCKET_ERROR()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SOCKET_ERROR"
		);
	}
	jint SipErrorCode::TIME_OUT()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TIME_OUT"
		);
	}
	jint SipErrorCode::TRANSACTION_TERMINTED()
	{
		return getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TRANSACTION_TERMINTED"
		);
	}
	
	// Constructors
	
	// Methods
	JString SipErrorCode::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.sip.SipErrorCode",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::net::sip


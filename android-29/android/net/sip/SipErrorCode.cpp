#include "./SipErrorCode.hpp"

namespace android::net::sip
{
	// Fields
	jint SipErrorCode::CLIENT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CLIENT_ERROR"
		);
	}
	jint SipErrorCode::CROSS_DOMAIN_AUTHENTICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"CROSS_DOMAIN_AUTHENTICATION"
		);
	}
	jint SipErrorCode::DATA_CONNECTION_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"DATA_CONNECTION_LOST"
		);
	}
	jint SipErrorCode::INVALID_CREDENTIALS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_CREDENTIALS"
		);
	}
	jint SipErrorCode::INVALID_REMOTE_URI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"INVALID_REMOTE_URI"
		);
	}
	jint SipErrorCode::IN_PROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"IN_PROGRESS"
		);
	}
	jint SipErrorCode::NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"NO_ERROR"
		);
	}
	jint SipErrorCode::PEER_NOT_REACHABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"PEER_NOT_REACHABLE"
		);
	}
	jint SipErrorCode::SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_ERROR"
		);
	}
	jint SipErrorCode::SERVER_UNREACHABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SERVER_UNREACHABLE"
		);
	}
	jint SipErrorCode::SOCKET_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"SOCKET_ERROR"
		);
	}
	jint SipErrorCode::TIME_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TIME_OUT"
		);
	}
	jint SipErrorCode::TRANSACTION_TERMINTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipErrorCode",
			"TRANSACTION_TERMINTED"
		);
	}
	
	// QAndroidJniObject forward
	SipErrorCode::SipErrorCode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring SipErrorCode::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipErrorCode",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::net::sip


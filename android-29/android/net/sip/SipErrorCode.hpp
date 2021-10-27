#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::sip
{
	class SipErrorCode : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLIENT_ERROR();
		static jint CROSS_DOMAIN_AUTHENTICATION();
		static jint DATA_CONNECTION_LOST();
		static jint INVALID_CREDENTIALS();
		static jint INVALID_REMOTE_URI();
		static jint IN_PROGRESS();
		static jint NO_ERROR();
		static jint PEER_NOT_REACHABLE();
		static jint SERVER_ERROR();
		static jint SERVER_UNREACHABLE();
		static jint SOCKET_ERROR();
		static jint TIME_OUT();
		static jint TRANSACTION_TERMINTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace __jni_impl::android::net::sip


namespace __jni_impl::android::net::sip
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
	
	// Constructors
	void SipErrorCode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipErrorCode",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipErrorCode : public __jni_impl::android::net::sip::SipErrorCode
	{
	public:
		SipErrorCode(QAndroidJniObject obj) { __thiz = obj; }
		SipErrorCode()
		{
			__constructor();
		}
	};
} // namespace android::net::sip


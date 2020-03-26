#pragma once

#ifndef JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS
#define JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NOT_HANDSHAKING();
		static QAndroidJniObject FINISHED();
		static QAndroidJniObject NEED_TASK();
		static QAndroidJniObject NEED_WRAP();
		static QAndroidJniObject NEED_UNWRAP();
		static QAndroidJniObject NEED_UNWRAP_AGAIN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NOT_HANDSHAKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NOT_HANDSHAKING",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"FINISHED",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_TASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_TASK",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_WRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_WRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_UNWRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::NEED_UNWRAP_AGAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"NEED_UNWRAP_AGAIN",
			"Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	
	// Constructors
	void SSLEngineResult_HandshakeStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"(V)V");
	}
	
	// Methods
	jarray SSLEngineResult_HandshakeStatus::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		).object<jarray>();
	}
	QAndroidJniObject SSLEngineResult_HandshakeStatus::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$HandshakeStatus",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;",
			arg0
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus : public __jni_impl::javax::net::ssl::SSLEngineResult_HandshakeStatus
	{
	public:
		SSLEngineResult_HandshakeStatus(QAndroidJniObject obj) { __thiz = obj; }
		SSLEngineResult_HandshakeStatus()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS


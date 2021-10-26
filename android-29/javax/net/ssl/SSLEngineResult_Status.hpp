#pragma once

#ifndef JAVAX_NET_SSL_SSLENGINERESULT_STATUS
#define JAVAX_NET_SSL_SSLENGINERESULT_STATUS

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLEngineResult_Status : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUFFER_UNDERFLOW();
		static QAndroidJniObject BUFFER_OVERFLOW();
		static QAndroidJniObject OK();
		static QAndroidJniObject CLOSED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	QAndroidJniObject SSLEngineResult_Status::BUFFER_UNDERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_UNDERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::BUFFER_OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"BUFFER_OVERFLOW",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::OK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"OK",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	QAndroidJniObject SSLEngineResult_Status::CLOSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.net.ssl.SSLEngineResult$Status",
			"CLOSED",
			"Ljavax/net/ssl/SSLEngineResult$Status;"
		);
	}
	
	// Constructors
	void SSLEngineResult_Status::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLEngineResult$Status",
			"(V)V");
	}
	
	// Methods
	jarray SSLEngineResult_Status::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"values",
			"()[Ljavax/net/ssl/SSLEngineResult$Status;"
		).object<jarray>();
	}
	QAndroidJniObject SSLEngineResult_Status::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;",
			arg0
		);
	}
	QAndroidJniObject SSLEngineResult_Status::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SSLEngineResult$Status",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLEngineResult_Status : public __jni_impl::javax::net::ssl::SSLEngineResult_Status
	{
	public:
		SSLEngineResult_Status(QAndroidJniObject obj) { __thiz = obj; }
		SSLEngineResult_Status()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLENGINERESULT_STATUS


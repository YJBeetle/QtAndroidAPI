#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}
namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class SecureRandom;
}

namespace org::apache::http::conn::ssl
{
	class SSLSocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALLOW_ALL_HOSTNAME_VERIFIER();
		static QAndroidJniObject BROWSER_COMPATIBLE_HOSTNAME_VERIFIER();
		static jstring SSL();
		static jstring SSLV2();
		static QAndroidJniObject STRICT_HOSTNAME_VERIFIER();
		static jstring TLS();
		
		SSLSocketFactory(QAndroidJniObject obj);
		// Constructors
		SSLSocketFactory(java::security::KeyStore &arg0);
		SSLSocketFactory(java::security::KeyStore &arg0, jstring &arg1);
		SSLSocketFactory(java::security::KeyStore &arg0, const QString &arg1);
		SSLSocketFactory(java::security::KeyStore &arg0, jstring &arg1, java::security::KeyStore &arg2);
		SSLSocketFactory(java::security::KeyStore &arg0, const QString &arg1, java::security::KeyStore &arg2);
		SSLSocketFactory(jstring &arg0, java::security::KeyStore &arg1, jstring &arg2, java::security::KeyStore &arg3, java::security::SecureRandom &arg4, __JniBaseClass &arg5);
		SSLSocketFactory(const QString &arg0, java::security::KeyStore &arg1, const QString &arg2, java::security::KeyStore &arg3, java::security::SecureRandom &arg4, __JniBaseClass &arg5);
		SSLSocketFactory() = default;
		
		// Methods
		static QAndroidJniObject getSocketFactory();
		QAndroidJniObject connectSocket(java::net::Socket arg0, jstring arg1, jint arg2, java::net::InetAddress arg3, jint arg4, __JniBaseClass arg5);
		QAndroidJniObject connectSocket(java::net::Socket arg0, const QString &arg1, jint arg2, java::net::InetAddress arg3, jint arg4, __JniBaseClass arg5);
		QAndroidJniObject createSocket();
		QAndroidJniObject createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		QAndroidJniObject createSocket(java::net::Socket arg0, const QString &arg1, jint arg2, jboolean arg3);
		QAndroidJniObject getHostnameVerifier();
		jboolean isSecure(java::net::Socket arg0);
		void setHostnameVerifier(__JniBaseClass arg0);
	};
} // namespace org::apache::http::conn::ssl


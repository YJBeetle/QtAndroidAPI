#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../SocketFactory.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::net
{
	class Socket;
}
namespace javax::net
{
	class SocketFactory;
}

namespace javax::net::ssl
{
	class SSLSocketFactory : public javax::net::SocketFactory
	{
	public:
		// Fields
		
		SSLSocketFactory(QAndroidJniObject obj);
		// Constructors
		SSLSocketFactory();
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2);
		QAndroidJniObject createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
	};
} // namespace javax::net::ssl


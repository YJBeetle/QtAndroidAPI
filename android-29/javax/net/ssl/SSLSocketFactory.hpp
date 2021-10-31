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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::SocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocketFactory(QAndroidJniObject obj);
		
		// Constructors
		SSLSocketFactory();
		
		// Methods
		static javax::net::SocketFactory getDefault();
		java::net::Socket createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2);
		java::net::Socket createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		jarray getDefaultCipherSuites();
		jarray getSupportedCipherSuites();
	};
} // namespace javax::net::ssl


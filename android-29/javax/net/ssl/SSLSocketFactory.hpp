#pragma once

#include "../SocketFactory.hpp"

class JArray;
namespace java::io
{
	class InputStream;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::SocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocketFactory(QJniObject obj);
		
		// Constructors
		SSLSocketFactory();
		
		// Methods
		static javax::net::SocketFactory getDefault();
		java::net::Socket createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2) const;
		java::net::Socket createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3) const;
		JArray getDefaultCipherSuites() const;
		JArray getSupportedCipherSuites() const;
	};
} // namespace javax::net::ssl


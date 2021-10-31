#include "../../../java/io/InputStream.hpp"
#include "../../../java/net/Socket.hpp"
#include "../SocketFactory.hpp"
#include "./SSLSocketFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLSocketFactory::SSLSocketFactory(QAndroidJniObject obj) : javax::net::SocketFactory(obj) {}
	
	// Constructors
	SSLSocketFactory::SSLSocketFactory()
		: javax::net::SocketFactory(
			"javax.net.ssl.SSLSocketFactory",
			"()V"
		) {}
	
	// Methods
	javax::net::SocketFactory SSLSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SSLSocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, java::io::InputStream arg1, jboolean arg2)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/io/InputStream;Z)Ljava/net/Socket;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jarray SSLSocketFactory::getDefaultCipherSuites()
	{
		return callObjectMethod(
			"getDefaultCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLSocketFactory::getSupportedCipherSuites()
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace javax::net::ssl


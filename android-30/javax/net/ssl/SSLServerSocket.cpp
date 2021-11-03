#include "../../../JArray.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./SSLParameters.hpp"
#include "./SSLServerSocket.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLServerSocket::SSLServerSocket(QAndroidJniObject obj) : java::net::ServerSocket(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SSLServerSocket::getEnableSessionCreation()
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLServerSocket::getEnabledCipherSuites()
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLServerSocket::getEnabledProtocols()
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLServerSocket::getNeedClientAuth()
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	javax::net::ssl::SSLParameters SSLServerSocket::getSSLParameters()
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JArray SSLServerSocket::getSupportedCipherSuites()
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLServerSocket::getSupportedProtocols()
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLServerSocket::getUseClientMode()
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLServerSocket::getWantClientAuth()
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLServerSocket::setEnableSessionCreation(jboolean arg0)
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setEnabledCipherSuites(JArray arg0)
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLServerSocket::setEnabledProtocols(JArray arg0)
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLServerSocket::setNeedClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0)
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLServerSocket::setUseClientMode(jboolean arg0)
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setWantClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl


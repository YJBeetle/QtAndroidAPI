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
	jboolean SSLServerSocket::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLServerSocket::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLServerSocket::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLServerSocket::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	javax::net::ssl::SSLParameters SSLServerSocket::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JArray SSLServerSocket::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLServerSocket::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLServerSocket::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLServerSocket::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLServerSocket::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLServerSocket::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLServerSocket::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLServerSocket::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLServerSocket::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl


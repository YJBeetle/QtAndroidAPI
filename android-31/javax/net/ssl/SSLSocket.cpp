#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./SSLParameters.hpp"
#include "./SSLSocket.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLSocket::SSLSocket(QAndroidJniObject obj) : java::net::Socket(obj) {}
	
	// Constructors
	
	// Methods
	void SSLSocket::addHandshakeCompletedListener(JObject arg0)
	{
		callMethod<void>(
			"addHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	JString SSLSocket::getApplicationProtocol()
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	jboolean SSLSocket::getEnableSessionCreation()
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLSocket::getEnabledCipherSuites()
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLSocket::getEnabledProtocols()
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JString SSLSocket::getHandshakeApplicationProtocol()
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLSocket::getHandshakeApplicationProtocolSelector()
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	JObject SSLSocket::getHandshakeSession()
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	jboolean SSLSocket::getNeedClientAuth()
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	javax::net::ssl::SSLParameters SSLSocket::getSSLParameters()
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JObject SSLSocket::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	JArray SSLSocket::getSupportedCipherSuites()
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLSocket::getSupportedProtocols()
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLSocket::getUseClientMode()
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLSocket::getWantClientAuth()
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLSocket::removeHandshakeCompletedListener(JObject arg0)
	{
		callMethod<void>(
			"removeHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	void SSLSocket::setEnableSessionCreation(jboolean arg0)
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setEnabledCipherSuites(JArray arg0)
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLSocket::setEnabledProtocols(JArray arg0)
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLSocket::setHandshakeApplicationProtocolSelector(JObject arg0)
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void SSLSocket::setNeedClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0)
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLSocket::setUseClientMode(jboolean arg0)
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setWantClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::startHandshake()
	{
		callMethod<void>(
			"startHandshake",
			"()V"
		);
	}
} // namespace javax::net::ssl


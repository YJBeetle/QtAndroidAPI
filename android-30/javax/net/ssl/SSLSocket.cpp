#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./SSLParameters.hpp"
#include "./SSLSocket.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	void SSLSocket::addHandshakeCompletedListener(JObject arg0) const
	{
		callMethod<void>(
			"addHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	JString SSLSocket::getApplicationProtocol() const
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	jboolean SSLSocket::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLSocket::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLSocket::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JString SSLSocket::getHandshakeApplicationProtocol() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLSocket::getHandshakeApplicationProtocolSelector() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	JObject SSLSocket::getHandshakeSession() const
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	jboolean SSLSocket::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	javax::net::ssl::SSLParameters SSLSocket::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JObject SSLSocket::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	JArray SSLSocket::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLSocket::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLSocket::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLSocket::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLSocket::removeHandshakeCompletedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	void SSLSocket::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLSocket::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLSocket::setHandshakeApplicationProtocolSelector(JObject arg0) const
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void SSLSocket::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLSocket::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLSocket::startHandshake() const
	{
		callMethod<void>(
			"startHandshake",
			"()V"
		);
	}
} // namespace javax::net::ssl


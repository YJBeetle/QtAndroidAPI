#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./SSLParameters.def.hpp"
#include "./SSLSocket.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SSLSocket::addHandshakeCompletedListener(JObject arg0) const
	{
		callMethod<void>(
			"addHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	inline JString SSLSocket::getApplicationProtocol() const
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SSLSocket::getEnableSessionCreation() const
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	inline JArray SSLSocket::getEnabledCipherSuites() const
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLSocket::getEnabledProtocols() const
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline JString SSLSocket::getHandshakeApplicationProtocol() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SSLSocket::getHandshakeApplicationProtocolSelector() const
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	inline JObject SSLSocket::getHandshakeSession() const
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	inline jboolean SSLSocket::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	inline javax::net::ssl::SSLParameters SSLSocket::getSSLParameters() const
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	inline JObject SSLSocket::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	inline JArray SSLSocket::getSupportedCipherSuites() const
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray SSLSocket::getSupportedProtocols() const
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean SSLSocket::getUseClientMode() const
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	inline jboolean SSLSocket::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	inline void SSLSocket::removeHandshakeCompletedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeHandshakeCompletedListener",
			"(Ljavax/net/ssl/HandshakeCompletedListener;)V",
			arg0.object()
		);
	}
	inline void SSLSocket::setEnableSessionCreation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	inline void SSLSocket::setEnabledCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLSocket::setEnabledProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SSLSocket::setHandshakeApplicationProtocolSelector(JObject arg0) const
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	inline void SSLSocket::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline void SSLSocket::setSSLParameters(javax::net::ssl::SSLParameters arg0) const
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	inline void SSLSocket::setUseClientMode(jboolean arg0) const
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	inline void SSLSocket::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	inline void SSLSocket::startHandshake() const
	{
		callMethod<void>(
			"startHandshake",
			"()V"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/net/Socket.hpp"

